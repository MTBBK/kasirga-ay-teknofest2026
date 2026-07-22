#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>

char logo[] ="bbbbbbbbbbb";

int setup_uart(const char *device) {
    int fd = open(device, O_RDWR | O_NOCTTY | O_SYNC);

    if (fd < 0) {
        perror("open");
        exit(1);
    }

    struct termios tty;
    memset(&tty, 0, sizeof tty);

    if (tcgetattr(fd, &tty) != 0) {
        perror("tcgetattr");
        exit(1);
    }

    cfsetospeed(&tty, B921600);
    cfsetispeed(&tty, B921600);

    tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8;
    tty.c_cflag |= CLOCAL | CREAD;
    tty.c_cflag &= ~PARENB;
    tty.c_cflag &= ~CSTOPB;
    tty.c_cflag &= ~CRTSCTS;

    tty.c_lflag = 0;
    tty.c_iflag = 0;
    tty.c_oflag = 0;

    tty.c_cc[VMIN]  = 0;
    tty.c_cc[VTIME] = 10;

    if (tcsetattr(fd, TCSANOW, &tty) != 0) {
        perror("tcsetattr");
        exit(1);
    }

    return fd;
}
int main() {
    int fd = setup_uart("/dev/ttyUSB1");
    char input[32];

    printf("AAAAAAAAAAAAAAAAAAAA: ");

    while (fgets(input, sizeof(input), stdin)) {
        if (input[0] == 'b') {
            int len = strlen(logo);
            struct timeval start, end;

            printf("\nSending logo to Basys3...\n\n");

            gettimeofday(&start, NULL); 

            for (int i = 0; i < len; i++) {
                write(fd, &logo[i], 1);

                char rx;
                int n = read(fd, &rx, 1);

                if (n > 0) {
                    putchar(rx);
                    fflush(stdout);
                }

                //usleep(500); // small delay for UART stability
            }

            gettimeofday(&end, NULL); 

            printf("\n\nDone.\n\n");

            double elapsed_sec = (end.tv_sec - start.tv_sec) + 
                                 (end.tv_usec - start.tv_usec) / 1000000.0;

            double bytes_per_sec = len / elapsed_sec;
            // 8N1 (1 start bit + 8 data bits + 1 stop bit = 10 bits per byte)
            double bits_per_sec = (len * 10) / elapsed_sec; 

            printf("--- Transfer Statistics ---\n");
            printf("Start Time : %ld.%06ld s\n", start.tv_sec, start.tv_usec);
            printf("End Time   : %ld.%06ld s\n", end.tv_sec, end.tv_usec);
            printf("Time Taken : %.4f seconds\n", elapsed_sec);
            printf("Total Sent : %d bytes\n", len);
            printf("Eff. Speed : %.2f Bytes/sec (%.2f bps)\n", bytes_per_sec, bits_per_sec);
            printf("---------------------------\n");

        } else {
            printf("Unknown command. Type 'b' then Enter.\n");
        }

        printf("\nAAAAAAAAAAAAAAAAA: ");
    }

    close(fd);
    return 0;
}
