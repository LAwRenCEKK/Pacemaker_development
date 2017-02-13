#include <stdio.h>   /* Standard input/output definitions */
#include <string.h>  /* String function definitions */
#include <unistd.h>  /* UNIX standard function definitions */
#include <fcntl.h>   /* File control definitions */
#include <errno.h>   /* Error number definitions */
#include <termios.h> /* POSIX terminal control definitions */
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
/*
 * 'open_port()' - Open serial port 1.
 *
 * Returns the file descriptor on success or -1 on error.
 */
char buffer[32];
int open_port(void)
{
    const char *device = "/dev/tty.usbmodem1412";
    int  fd = open(device, O_RDWR | O_NOCTTY | O_NDELAY);
    if( fd == -1) {
        printf( "failed to open port\n" );
    }
  return (fd);
}
int read_port(void)
{
    int fd = open("/dev/tty.usbmodem1412", O_RDONLY | O_NOCTTY);
    if (fd == -1)
    {
        /* Could not open the port. */
        perror("open_port: Unable to open /dev/tty.usbmodem1412 - ");
    }

    int n = read(fd, buffer, sizeof(buffer));
    close(fd);
    if (n < 0)
        fputs("read failed!\n", stderr);
    return (fd);
}


int write_port( void )
{
    int  fd;
    int  size_written;

    /* open a file for output          */
    /* replace existing file if it exists */
    fd = creat( "outputdata.txt", S_IRUSR | S_IWUSR );

    /* write the text              */
    size_written = write( fd, buffer,
              sizeof( buffer ) );

    /* test for error              */
    if( size_written != sizeof( buffer ) ) {
        perror( "Error writing myfile.dat" );
        return EXIT_FAILURE;
    }

    /* close the file              */
    close( fd );

    return EXIT_SUCCESS;
}
