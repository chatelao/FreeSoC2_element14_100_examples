using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using System.Runtime.InteropServices;
using UARTBootloaderHost;


namespace UARTBootloaderHost
{


    public partial class Form1 : Form
    {
        /// <summary>
        /// Success 
        /// </summary>        
        internal const int ERR_SUCCESS = 0;
        /// <summary>
        /// Error opening communication channel
        /// </summary>
        internal const int ERR_OPEN = 1;
        /// <summary>
        /// Error closing communication channel
        /// </summary>
        internal const int ERR_CLOSE = 2;
        /// <summary>
        /// Error reading data
        /// </summary>
        internal const int ERR_READ = 3;
        /// <summary>
        /// Error writing data
        /// </summary>
        internal const int ERR_WRITE = 4;

        /// <summary>
        /// Method that opens the serial port connection
        /// Returns a success or failure
        /// </summary>
        public int OpenConnection()
        {
            int status = (int)CyBootLoaderStatusCode.SUCCESS;
            if (ConnectionStatus == false)
            {

                try
                {
                    serialPort.Open();
                    ConnectionStatus = true;
                }
                catch (Exception)
                {
                    MessageBox.Show("Cannot open serial port, check the connections");
                    ConnectionStatus = false;
                }
                status = (int)ReturnCodes.CYRET_ERR_COMM_MASK;
            }
            return (status);

        }

        /// <summary>
        /// Method that closes the serial  port connections
        /// </summary>
        public int CloseConnection()
        {
            System.Threading.Thread.Sleep(20);
            serialPort.Close();
            ConnectionStatus = false;
            ConnectionStatus = false;
            label4.Text = "Disconnected";
            label4.ForeColor = Color.Red;
            return ((int)CyBootLoaderStatusCode.SUCCESS);
        }

        /// <summary>
        /// Method that reads data from the UART terminal
        /// </summary>
        /// <param name="buffer"> Pointer to an array where data received from the bootloader needs to be stored </param>
        /// <param name="size"> Size of the Buffer </param>
        /// <returns></returns>
        public int ReadData(IntPtr buffer, int size)
        {
            UInt16 countertemp = 0;
            UInt16 delay_max = 20;
            UInt16 delay_divider = (UInt16)(serialPort.BaudRate / 9600);

            int status = (int)CyBootLoaderStatusCode.ERROR_PACKET_LENGTH;

            /* Wait for data to be available. If atleast one byte is received 
             within 1s interval , then break from the loop waiting for data */
            while (countertemp++ < 1000)
            {

                System.Threading.Thread.Sleep(1);
                if (serialPort.BytesToRead != 0)
                    break;
            }
            /* Delay for receiving 16 bytes at the specified baud rate */
            System.Threading.Thread.Sleep((delay_max / delay_divider) + 1);

            size = serialPort.BytesToRead;
            byte[] data = new byte[256];

            if (size != 0)
            {
                serialPort.Read(data, 0, size);
                status = (int)CyBootLoaderStatusCode.SUCCESS;
            }

            if (data[1] != 0)
            {
                textBox_StatusLog.Text+=" Error : " + data[1];
            }
            Marshal.Copy(data, 0, buffer, size);

            return (status);
        }

        /// <summary>
        /// Method that writes to the UART device
        /// </summary>
        /// <param name="buffer">Pointer to an array where data to be written to the bootloader is stored </param>
        /// <param name="size"> Size of the Buffer </param>
        /// <returns></returns>
        public int WriteData(IntPtr buffer, int size)
        {
            byte[] data = new byte[256];
            serialPort.DiscardInBuffer();
            serialPort.DiscardOutBuffer();
            Marshal.Copy(buffer, data, 0, size);

            for (int i = 0; i < size; i++)
            {
                if (size > (i + 4))
                {
                    serialPort.Write(data, i, 4);
                    i = i + 3;
                }
                else
                {
                    serialPort.Write(data, i, 1);
                }
                System.Threading.Thread.Sleep(1);

            }


            return ((int)CyBootLoaderStatusCode.SUCCESS);

        }

        /// <summary>
        /// Method that updates the progress bar
        /// </summary>
        /// <param name="arrayID"></param>
        /// <param name="rowNum"></param>
        public void ProgressUpdate(byte arrayID, ushort rowNum)
        {
            progressBarProgress += progressBarStepSize;
            progressBar1.Value = (int)progressBarProgress;
            return;
        }

        /// <summary>
        /// Method that returns the maximum transfer size
        /// </summary>
        public uint MaxTransferSize
        {
            get { return (uint)32; }
        }


    }

}
