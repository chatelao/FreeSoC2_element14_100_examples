/* This file is the main Form implemeting the GUI. 
 * It contains the code to be executed on "Program" Button Click event. 
 * It also contains the code to be implemented on various selections in the Form
 * 
 * The file "Bootload_enums.cs" contains the definition for all the enum data types. It provides the status codes and return codes used during Bootloader operation
 * 
 * The file "Bootload_Utils_NativeCode.cs" contains code that delegates the UART communication functions to the unmanaged C functions
 * * The functions OpenConnection,CloseConnection,ReadData,WriteData called in the Bootloader Files provided by Cypress have to be defined by the user. 
 * * In our C# GUI, the methods OpenConnection_UART,CloseConnection_UART,ReadData_UART,WriteData_UART provide the defintions for above functions.
 * 
 * The file "delegated_functions.cs" contains the definitions for the methods, OpenConnection_UART(),CloseConnection_UART(),ReadData_UART(),WriteData_UART().
 *
 */
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using System.IO;
using UARTBootloaderHost;

namespace UARTBootloaderHost
{
    public partial class Form1 : Form
    {
        // String holding the Cyacd file path/name
        string Chosen_File_Cyacd = "";
        bool Cyacd_found, ConnectionStatus;
        double progressBarProgress;
        double progressBarStepSize;
        Bootload_Utils.CyBtldr_CommunicationsData comm_data = new Bootload_Utils.CyBtldr_CommunicationsData();

        /// Bootload action to perform 
        private enum CyBootloadAction
        {
            PROGRAM,
            ERASE,
            VERIFY,
        }

        /// <summary>
        /// The main Form
        /// </summary>
        public Form1()
        {
            InitializeComponent();
            comboBox2.SelectedIndex = 3;
        }

        /// <summary>
        /// Method to change the serial port selection
        /// </summary>
        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            serialPort.Close();
            ConnectionStatus = false;
            label4.Text = "Disconnected";
            label4.ForeColor = Color.Red;
            serialPort.PortName = comboBox1.Text;
        }
       
        //Supported baud rates
        int[] baud_rate = new int[] { 9600, 19200, 38400, 57600};
        /// <summary>
        /// Method to change the serial port baud rate
        /// </summary>
        private void comboBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            serialPort.BaudRate = baud_rate[comboBox2.SelectedIndex];
        }

        /// <summary>
        /// Method to connect to the serial port.
        /// The bootload communication structure is also initialized in this method
        /// </summary>
        private void button1_Click(object sender, EventArgs e)
        {
            int a, b;
            bool c;
            a = 10;
            b = 20;
            c = (a == b);

            try
            {
                serialPort.Open();
                ConnectionStatus = true;
            }
            catch (Exception)
            {
                MessageBox.Show("Cannot open serial port, check the connections");
                label4.Text = "Disconnected";
                label4.ForeColor = Color.Red;
                try
                {
                    serialPort.Close();
                }
                catch
                {
                }

            }
            if (ConnectionStatus)
            {
                label4.Text = "Connected";
                label4.ForeColor = Color.Green;
            }

            comm_data.OpenConnection = OpenConnection;
            comm_data.CloseConnection = CloseConnection;
            comm_data.ReadData = ReadData;
            comm_data.WriteData = WriteData;
            comm_data.MaxTransferSize = 64;


        }
        /// <summary>
        /// Method to select CYACD file on "Browse" button click
        /// </summary>
        private void button2_Click(object sender, EventArgs e)
        {
            openFileDialog1.Title = "Open CYACD File";
            openFileDialog1.Filter = "cyacd file|*.cyacd";

            if (openFileDialog1.ShowDialog() == DialogResult.None)
            {
                textBox_StatusLog.Text += " No file chosen\r\n";
                Cyacd_found = false;
            }
        }

        /// <summary>
        /// Method to select CYACD file on "Browse" button click
        /// </summary>
        private void Bootload_Click(object sender, EventArgs e)
        {
            int local_status = 0;
            comboBox1.Enabled = false;
            comboBox2.Enabled = false;
            Bootload.Enabled = false;
            button2.Enabled = false;
            button1.Enabled = false;
            FileNameTB.Enabled = false;
            Bootload_Utils.CyBtldr_ProgressUpdate update = new Bootload_Utils.CyBtldr_ProgressUpdate(ProgressUpdate);
            if (ConnectionStatus)
            {
                if (Cyacd_found)
                {

                    try
                    {
                        DateTime saveNow = DateTime.Now;
                        string time_var = saveNow.ToString();
                        textBox_StatusLog.Text += " Bootload Started at " + time_var + "\r\n";
                        this.Refresh();

                        local_status = Bootload_Utils.CyBtldr_Program(Chosen_File_Cyacd, ref comm_data, update);
                        saveNow = DateTime.Now;
                        time_var = saveNow.ToString();
                        if (local_status == (int)ReturnCodes.CYRET_SUCCESS)
                        {
                            textBox_StatusLog.Text += " Bootload ended at " + time_var + "\r\n Bootload successful  !! \r\n";

                        }
                        else
                        {
                            if (local_status == 204)
                            {
                                textBox_StatusLog.Text += " Communication Failure!!\r\n";
                            }
                            else if (local_status == 36 || local_status == 3)
                            {
                                textBox_StatusLog.Text += " Bootload failed!!" + "\t" + time_var + "\r\n";
                                textBox_StatusLog.Text += " Check if device is in bootload mode !!\r\n";
                            }
                            else
                            {
                                textBox_StatusLog.Text += " Bootload Failed " + local_status + "\t" + time_var + "\r\n";
                            }
                        }
                        progressBarProgress = 0;
                        progressBar1.Value = 0;
                    }

                    catch
                    {
                        textBox_StatusLog.Text += " Unhandled exception\r\n";
                    }
                }

                else
                    textBox_StatusLog.Text += " No file chosen\r\n";

            }
            else
            {
                textBox_StatusLog.Text += " Communication Failure \r\n";
            }
            CloseConnection();
            Bootload.Enabled = true;
            button2.Enabled = true;
            button1.Enabled = true;
            comboBox1.Enabled = true;
            comboBox2.Enabled = true;
            FileNameTB.Enabled = true;
        }

        /// <summary>
        /// Method to check the number of rows in the cyacd file and update the progress bar accordingly
        /// </summary>
        private void openFileDialog1_FileOk_1(object sender, CancelEventArgs e)
        {
            int lines;
            FileNameTB.ReadOnly = false;
            Chosen_File_Cyacd = openFileDialog1.FileName;
            FileNameTB.Text = Chosen_File_Cyacd;

            lines = File.ReadAllLines(Chosen_File_Cyacd).Length - 1; //Don't count header
            progressBarStepSize = 100.0 / lines;
            Cyacd_found = true;
        }



    }
}
