#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>
#include <pthread.h>

#define BAUD_RATE B921600
#define BYTE_LIMIT 1960

// Configures a serial port for 8N1 at 921600 baud
int setup_serial_port(const char *portname) {
    int fd = open(portname, O_RDWR | O_NOCTTY | O_SYNC);
    if (fd < 0) {
        printf("Error: Could not open serial port %s\n", portname);
        return -1;
    }

    struct termios tty;
    if (tcgetattr(fd, &tty) != 0) {
        printf("Error: tcgetattr failed for %s\n", portname);
        return -1;
    }

    cfsetospeed(&tty, BAUD_RATE);
    cfsetispeed(&tty, BAUD_RATE);

    tty.c_cflag = (tty.c_cflag & ~CSIZE) | CS8; // 8-bit characters
    tty.c_iflag &= ~IGNBRK;                     // Disable break processing
    tty.c_lflag = 0;                            // No signaling chars, no echo, no canonical processing
    tty.c_oflag = 0;                            // No remapping, no delays
    tty.c_cc[VMIN]  = 0;                        // Non-blocking read
    tty.c_cc[VTIME] = 1;                        // 0.1 seconds read timeout

    tty.c_iflag &= ~(IXON | IXOFF | IXANY);     // Shut off xon/xoff ctrl
    tty.c_cflag |= (CLOCAL | CREAD);            // Ignore modem controls, enable reading
    tty.c_cflag &= ~(PARENB | PARODD);          // Shut off parity
    tty.c_cflag &= ~CSTOPB;                     // 1 stop bit
    tty.c_cflag &= ~CRTSCTS;                    // No hardware flow control

    if (tcsetattr(fd, TCSANOW, &tty) != 0) {
        printf("Error: tcsetattr failed for %s\n", portname);
        return -1;
    }

    return fd;
}

// Thread function: Continuously reads the terminal UART and prints to console
void* terminal_agent_thread(void* arg) {
    int term_fd = *(int*)arg;
    unsigned char buffer[256];
    
    printf("[UART AJANI] Terminal listening... (921600 Baud)\n");
    
    while (1) {
        int bytes_read = read(term_fd, buffer, sizeof(buffer));
        if (bytes_read > 0) {
            for (int i = 0; i < bytes_read; i++) {
                putchar(buffer[i]);
            }
            fflush(stdout); // Ensure immediate printing
        }
    }
    return NULL;
}

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <Terminal_UART_Port> <Stream_UART_Port>\n", argv[0]);
        printf("Example: %s /dev/ttyUSB0 /dev/ttyUSB1\n", argv[0]);
        return 1;
    }

    const char *term_port = argv[1];
    const char *stream_port = argv[2];

    // Open and configure both UART ports
    int term_fd = setup_serial_port(term_port);
    int stream_fd = setup_serial_port(stream_port);

    if (term_fd < 0 || stream_fd < 0) {
        return 1;
    }

    // Launch the background thread to mimic 'simulated_uart_rx'
    pthread_t term_thread;
    if (pthread_create(&term_thread, NULL, terminal_agent_thread, &term_fd) != 0) {
        printf("Error: Failed to create terminal thread.\n");
        return 1;
    }

    // Main thread: Waits for 'b', reads file, and injects data over stream UART
    printf("[TB] System ready. Press 'b' and then [ENTER] to start inference stream injection...\n");

    char input;
    while (1) {
        input = getchar();
        if (input == 'b') {
            FILE *file = fopen("audio_input.mem", "r");
            if (!file) {
                printf("[TB UYARI] audio_input.mem not found! Cannot send data.\n");
                continue;
            }

            printf("[TB] Bilgisayardan (PC) Inference ses verisi gonderilmeye basliyor...\n");
            
            unsigned char audio_byte;
            int tb_byte_count = 0;

            // Read hex values line by line (matching SystemVerilog $fscanf "%h\n")
            while (fscanf(file, "%hhx", &audio_byte) == 1 && tb_byte_count < BYTE_LIMIT) {
                // Write byte to stream UART port
                int written = write(stream_fd, &audio_byte, 1);
                if (written > 0) {
                    tb_byte_count++;
                } else {
                    printf("[TB HATA] Failed to write byte %d to UART.\n", tb_byte_count);
                    break;
                }
                
                // Optional: small delay to prevent buffer overflow on the USB-UART chip
                // usleep(100); 
            }

            fclose(file);
            printf("[TB] %d bytes of Inference data successfully sent over Stream UART.\n", tb_byte_count);
        }
    }

    close(term_fd);
    close(stream_fd);
    return 0;
}
