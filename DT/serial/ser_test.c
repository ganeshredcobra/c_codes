#include <stdio.h>   /* Standard input/output definitions */
 #include <string.h>  /* String function definitions */
 #include <unistd.h>  /* UNIX standard function definitions */
 #include <fcntl.h>   /* File control definitions */
 #include <errno.h>   /* Error number definitions */
 #include <termios.h> /* POSIX terminal control definitions */
 
int set_interface_attribs (int fd, int speed, int parity)
{
        struct termios tty;
        memset (&tty, 0, sizeof tty);
        if (tcgetattr (fd, &tty) != 0)
        {
                printf ("error %d from tcgetattr", errno);
                return -1;
        }

        cfsetospeed (&tty, speed);
        cfsetispeed (&tty, speed);

        tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8;     // 8-bit chars
        // disable IGNBRK for mismatched speed tests; otherwise receive break
        // as \000 chars
        tty.c_iflag &= ~IGNBRK;         // ignore break signal
        tty.c_lflag = 0;                // no signaling chars, no echo,
                                        // no canonical processing
        tty.c_oflag = 0;                // no remapping, no delays
        tty.c_cc[VMIN]  = 0;            // read doesn't block
        tty.c_cc[VTIME] = 5;            // 0.5 seconds read timeout

        tty.c_iflag &= ~(IXON | IXOFF | IXANY); // shut off xon/xoff ctrl

        tty.c_cflag |= (CLOCAL | CREAD);// ignore modem controls,
                                        // enable reading
        tty.c_cflag &= ~(PARENB | PARODD);      // shut off parity
        tty.c_cflag |= parity;
        tty.c_cflag &= ~CSTOPB;
        tty.c_cflag &= ~CRTSCTS;

        if (tcsetattr (fd, TCSANOW, &tty) != 0)
        {
                printf ("error %d from tcsetattr", errno);
                return -1;
        }
        return 0;
}

void set_blocking (int fd, int should_block)
{
        struct termios tty;
        memset (&tty, 0, sizeof tty);
        if (tcgetattr (fd, &tty) != 0)
        {
                printf ("error %d from tggetattr", errno);
                return;
        }

        tty.c_cc[VMIN]  = should_block ? 1 : 0;
        tty.c_cc[VTIME] = 5;            // 0.5 seconds read timeout

        if (tcsetattr (fd, TCSANOW, &tty) != 0)
                printf ("error %d setting term attributes", errno);
}


void main()
{
	unsigned short opencmd = 0x0100;
	unsigned short closecmd = 0x0200;
	unsigned char openstr[2]={0x00,0x01};
	unsigned char closestr[2]={0x00,0x02};
	char *portname = "/dev/ttyUSB0";
	int temp;
	char chout;

int fd = open (portname, O_RDWR | O_NOCTTY | O_SYNC);
if (fd < 0)
{
        printf ("error %d opening %s: %s", errno, portname, strerror (errno));
        return;
}

set_interface_attribs (fd, B1000000, 0);  // set speed to 1000000 bps, 8n1 (no parity)
set_blocking (fd, 0);                // set no blocking

//write (fd, (char *)&opencmd, sizeof(unsigned short));           // send 2 character 
write (fd, (char *)closestr, 2);           // send 2 character 
//char buf [100];
//int n = read (fd, buf, sizeof(buf));  // read up to 100 characters if ready to read

 while(1)
{
	if(read(fd, &chout, sizeof(chout)))          /* Read character from ABU (Auto buffering Unit) */
	{
	  temp = chout;
      printf("Got %02X.\n", temp);
 	}
   chout=0;
  usleep(5000);  
}  

close(fd);
} 
