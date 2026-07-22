#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>
#include <stdlib.h>

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
    tty.c_cc[VTIME] = 10; // 1-second timeout

    if (tcsetattr(fd, TCSANOW, &tty) != 0) {
        perror("tcsetattr");
        exit(1);
    }
    return fd;
}

// Configures the user's terminal to "raw" unbuffered mode
void set_terminal_raw() {
    struct termios tty;
    tcgetattr(STDIN_FILENO, &tty);
    tty.c_lflag &= ~(ICANON | ECHO); 
    tcsetattr(STDIN_FILENO, TCSANOW, &tty);
}

// Resets terminal mode on application exit
void reset_terminal_mode() {
    struct termios tty;
    tcgetattr(STDIN_FILENO, &tty);
    tty.c_lflag |= (ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &tty);
}

int main(int argc, char **argv) {
    if (argc < 3) {
        printf("Usage: %s <TX_UART_PORT> <RX_UART_PORT>\n", argv[0]);
        printf("Example: %s /dev/ttyUSB0 /dev/ttyUSB1\n", argv[0]);
        return 1;
    }

    int fd_tx = setup_uart(argv[1]);
    int fd_rx = setup_uart(argv[2]);

    printf("Ready! Typing will be sent to %s and read from %s.\n", argv[1], argv[2]);
    printf("Press ESC to exit.\n\n");

    set_terminal_raw();

    char c, rx;
    while (1) {
        // Read keystroke from the console
        if (read(STDIN_FILENO, &c, 1) > 0) {
            if (c == 27) break; // Exit on ESC key
            
            // Push out via UART1
            write(fd_tx, &c, 1);

            // Fetch return from UART2 and push to terminal view
            int n = read(fd_rx, &rx, 1);
            if (n > 0) {
                putchar(rx);
                fflush(stdout);
            }
        }
    }

    reset_terminal_mode();
    close(fd_tx);
    close(fd_rx);
    printf("\nSession Closed.\n");
    
    return 0;
}
