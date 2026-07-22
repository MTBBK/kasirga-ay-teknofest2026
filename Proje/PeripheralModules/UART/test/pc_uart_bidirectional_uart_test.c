#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>
#include <stdlib.h>
#include <poll.h>

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
    tty.c_cflag &= ~(PARENB | CSTOPB | CRTSCTS);
    tty.c_lflag = 0; tty.c_iflag = 0; tty.c_oflag = 0;
    tty.c_cc[VMIN]  = 0;
    tty.c_cc[VTIME] = 10;

    if (tcsetattr(fd, TCSANOW, &tty) != 0) {
        perror("tcsetattr");
        exit(1);
    }
    return fd;
}

void set_terminal_raw() {
    struct termios tty;
    tcgetattr(STDIN_FILENO, &tty);
    tty.c_lflag &= ~(ICANON | ECHO); 
    tcsetattr(STDIN_FILENO, TCSANOW, &tty);
}

void reset_terminal_mode() {
    struct termios tty;
    tcgetattr(STDIN_FILENO, &tty);
    tty.c_lflag |= (ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &tty);
}

int main(int argc, char **argv) {
    if (argc != 2) {
        printf("Usage: %s <UART_PORT>\n", argv[0]);
        printf("Example: %s /dev/ttyUSB0\n", argv[0]);
        return 1;
    }

    int fd = setup_uart(argv[1]);
    
    printf("Connected to %s at 921600 baud.\n", argv[1]);
    printf("Press ESC to exit.\n\n");
    
    set_terminal_raw();

    // Set up polling for Keyboard and Serial Port simultaneously
    struct pollfd fds[2];
    fds[0].fd = STDIN_FILENO; // Keyboard
    fds[0].events = POLLIN;
    fds[1].fd = fd;           // UART Port
    fds[1].events = POLLIN;

    char buf[256];

    while (1) {
        // Wait indefinitely for data on either STDIN or UART
        int ret = poll(fds, 2, -1); 
        
        if (ret > 0) {
            // 1. Data arrived from keyboard
            if (fds[0].revents & POLLIN) {
                int n = read(STDIN_FILENO, buf, sizeof(buf));
                if (n > 0) {
                    if (buf[0] == 27) break; // Exit on ESC
                    write(fd, buf, n);       // Send to FPGA
                }
            }
            
            // 2. Data arrived from FPGA
            if (fds[1].revents & POLLIN) {
                int n = read(fd, buf, sizeof(buf));
                if (n > 0) {
                    write(STDOUT_FILENO, buf, n); // Print to screen
                }
            }
        }
    }

    reset_terminal_mode();
    close(fd);
    printf("\nSession Closed.\n");
    return 0;
}
