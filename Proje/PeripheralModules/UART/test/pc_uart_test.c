#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>
#include <stdlib.h>
#include <sys/time.h>

char logo[] ="\
                                                                                                                                                                                                        \r\n\
                                                                                                                                                                                                        \r\n\
              OOOOOOOOO             GGGGGGGGGGGGGUUUUUUUU     UUUUUUUUZZZZZZZZZZZZZZZZZZZ     EEEEEEEEEEEEEEEEEEEEEERRRRRRRRRRRRRRRRR           GGGGGGGGGGGGGIIIIIIIIIINNNNNNNN        NNNNNNNN         \r\n\
            OO:::::::::OO        GGG::::::::::::GU::::::U     U::::::UZ:::::::::::::::::Z     E::::::::::::::::::::ER::::::::::::::::R       GGG::::::::::::GI::::::::IN:::::::N       N::::::N         \r\n\
          OO:::::::::::::OO    GG:::::::::::::::GU::::::U     U::::::UZ:::::::::::::::::Z     E::::::::::::::::::::ER::::::RRRRRR:::::R    GG:::::::::::::::GI::::::::IN::::::::N      N::::::N         \r\n\
         O:::::::OOO:::::::O  G:::::GGGGGGGG::::GUU:::::U     U:::::UUZ:::ZZZZZZZZ:::::Z      EE::::::EEEEEEEEE::::ERR:::::R     R:::::R  G:::::GGGGGGGG::::GII::::::IIN:::::::::N     N::::::N         \r\n\
         O::::::O   O::::::O G:::::G       GGGGGG U:::::U     U:::::U ZZZZZ     Z:::::Z         E:::::E       EEEEEE  R::::R     R:::::R G:::::G       GGGGGG  I::::I  N::::::::::N    N::::::N         \r\n\
         O:::::O     O:::::OG:::::G               U:::::D     D:::::U         Z:::::Z           E:::::E               R::::R     R:::::RG:::::G                I::::I  N:::::::::::N   N::::::N         \r\n\
         O:::::O     O:::::OG:::::G               U:::::D     D:::::U        Z:::::Z            E::::::EEEEEEEEEE     R::::RRRRRR:::::R G:::::G                I::::I  N:::::::N::::N  N::::::N         \r\n\
         O:::::O     O:::::OG:::::G    GGGGGGGGGG U:::::D     D:::::U       Z:::::Z             E:::::::::::::::E     R:::::::::::::RR  G:::::G    GGGGGGGGGG  I::::I  N::::::N N::::N N::::::N         \r\n\
         O:::::O     O:::::OG:::::G    G::::::::G U:::::D     D:::::U      Z:::::Z              E:::::::::::::::E     R::::RRRRRR:::::R G:::::G    G::::::::G  I::::I  N::::::N  N::::N:::::::N         \r\n\
         O:::::O     O:::::OG:::::G    GGGGG::::G U:::::D     D:::::U     Z:::::Z               E::::::EEEEEEEEEE     R::::R     R:::::RG:::::G    GGGGG::::G  I::::I  N::::::N   N:::::::::::N         \r\n\
         O:::::O     O:::::OG:::::G        G::::G U:::::D     D:::::U    Z:::::Z                E:::::E               R::::R     R:::::RG:::::G        G::::G  I::::I  N::::::N    N::::::::::N         \r\n\
         O::::::O   O::::::O G:::::G       G::::G U::::::U   U::::::U ZZZ:::::Z     ZZZZZ       E:::::E       EEEEEE  R::::R     R:::::R G:::::G       G::::G  I::::I  N::::::N     N:::::::::N         \r\n\
         O:::::::OOO:::::::O  G:::::GGGGGGGG::::G U:::::::UUU:::::::U Z::::::ZZZZZZZZ:::Z     EE::::::EEEEEEEE:::::ERR:::::R     R:::::R  G:::::GGGGGGGG::::GII::::::IIN::::::N      N::::::::N         \r\n\
          OO:::::::::::::OO    GG:::::::::::::::G  UU:::::::::::::UU  Z:::::::::::::::::Z     E::::::::::::::::::::ER::::::R     R:::::R   GG:::::::::::::::GI::::::::IN::::::N       N:::::::N         \r\n\
            OO:::::::::OO        GGG::::::GGG:::G    UU:::::::::UU    Z:::::::::::::::::Z     E::::::::::::::::::::ER::::::R     R:::::R     GGG::::::GGG:::GI::::::::IN::::::N        N::::::N         \r\n\
              OOOOOOOOO             GGGGGG   GGGG      UUUUUUUUU      ZZZZZZZZZZZZZZZZZZZ     EEEEEEEEEEEEEEEEEEEEEERRRRRRRR     RRRRRRR        GGGGGG   GGGGIIIIIIIIIINNNNNNNN         NNNNNNN         \r\n\
                                                                                                            ,*(/*,#####%%%%%&&&&%##*.                                                                   \r\n\
                                                                                                         (%%%&&%(*************//#%%%%%(#,                                                               \r\n\
                                                                                                      /&&&(***,,,,,*,*,,,,,,,,,,,,,,*/%%%%,                                                             \r\n\
                                                                                                   *&%,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,*(%##%,                                                         \r\n\
                                                  .,*//////*,                                   ,%%,,,,,,,,,,,,,,,,,,,,......,.,,,,,,,,,,,,(%&##%                                                       \r\n\
                                       .(#%%%%%%####((((####%%%%%%%#*                          #(,,,,,,,,,,,,,,,,,,,............,..,,,,,.,,,*(&&%&(                                                     \r\n\
                                 ,#%%%#*.                        ,#%%%%,                     /(***,,,,,,,,,,,,,,.,,,..................,..,,,,,/#&&&&                                                    \r\n\
                    ,        /%%#,                                  *%%%        #           *******,,,,,,,,,,,,,,,,......................,..,,*/#%%&&%                                                  \r\n\
                .#        /%#.                                       #%/       ##           /******,,,,,,,,,,,,,,,..............,........,.,,,,*(#(%%%#                                                 \r\n\
              #%        /%,    ..                             *     *#.      ,%%           /*******,,,,,,,,,.,,,,,,....................,,.,,,,,,/(##%%#(                                                \r\n\
            #%%        ,/    ./.                           **     .*       (%%*            ,,***,,*,,,,,,,,,,...,.,,,,...................,,,,,,*//((#%%(                                                \r\n\
           %%%/              **/.                     ,**,             .#%%%.              ,***/((((#(((/**,,,,*,,,*********,,,.......,,,,,,,,**/((#####                                                \r\n\
          (%%%%                ,//*//*,,,,,,,**///*,               .#%%%%,                 */##((((((((((//********////(((####//***,,,,,,,,,,,,,((((###(                                                \r\n\
          ,%%%%%%                                             *#%%%%%*                     *((/////((##(###(/*,,,*/(((((/**,*,,,,*///**,,,,,,,,,*((((#%/                                                \r\n\
            %%%%%%%%(.                                ./%%%%%%%%/                         ,*//%&&%%&&@@&%%%#*,...,**(##%((((/(%(/***/(***,,,,,,,*(//((#,                                                \r\n\
              ,%%%%%%%%%%%%%#(/,,,.....,,*/(#%%%%%%%%%%%%#*                               *//((((/////(((//*,,...,,,,**/////(///(%&#******,,,,,,*/(((##                                                 \r\n\
                    /%%%%%%%%%%%%%%%%%%%%%%%%%%%#,                                        ******/***********,,..,,,.,,,,//(##(((//*,****,,,,,,,,*/(/((,                                                 \r\n\
                                                                                          ******,,,,,,,*/*,,....,,,,......,,,,,,,,,,,,,,,,,,,,,,//**,//(/                                               \r\n\
                                                                                          ****,,,,,,,*/,*,,.....,,,*/*,,........,,,,,,,,,,**********,,,**                                               \r\n\
      ...                                                                                 ***,,,,,,*(#**//*,,**,,...,/(/,,.........,,,,,,*****,,,/%/,,,,,                                               \r\n\
      %%%                                                                                .*****,**/(//#%&&#(((%%&@%(//*((*,.......,,,,,,,*,*,,,,,*((*,,,                                                \r\n\
      %%%     ...     .,,.         .*,      ...    ..   ,,     **,   ..       ,,,        ********/**/##%&&&&&%%%//***,.,,(/*,,,,,,,,,,,,,,,,,,,,,,.,,.,,                                                \r\n\
      %%%   %%%/    %%%%%%%%(   (%%%*(%%/   %%%   ,%%/%%%(  %%%%#(%%%%%,   (%%%%%%%%.    *******/#%&%%#%%##%/%&%#%#(/(*,,.//*,,,,,,,,,,,,,,,,,,,,...,*.                                                 \r\n\
      %%% #%%*            *%%.  %%%/        %%%   ,%%%.    %%%.     #%%,          %%%    ******/##%%#%%%%%%%%%%%##(/((#*/*,//*,,,,,,,,,,,,,,,,,,......                                                  \r\n\
      %%%%%%%(     %%%%//#%%%,    /%%%%%    %%%   ,%%*     %%%      (%%,  ,%%%(/(%%%%    ******##(#(/**,*,,,,.,,,**//#%%((/,,,,,,,,,,,,,,,,,,,,,,,,,                                                    \r\n\
      %%%. .%%%   /%%,    *%%,        *%%.  %%%   ,%%*     ,%%%/  .%%%%,  %%#     %%%    ,/***/((**//(%##(/(/((((/,,,,*#%#(,,,,,,,,,,,,,,,,,,,,**                                                       \r\n\
      %%%    %%%*  %%%%%%%#%%, ,%%%%%%%%(   %%%   ,%%*       .#%%%( (%%,  ,%%%%%%%%%%     *///(#(///////(#((##(*/*/,*,,,/(**,,,,,,,,,,,,**,,,,,,                                                        \r\n\
                                                            ((     #%%#                    ,*/(#/******/*/*,,,,,.,,*,..,,*/*****,**********,*,,,                                                        \r\n\
                                                            .(#%%%%#,                        (#(((/*/,//((///(/*,,**/*,*,*********////********....                                                      \r\n\
                                                                                               ####(///#%####/(((/(///////******/////**//(*,,,,,,,                                                      \r\n\
                                                                                                /%%(((#%%%(%%%(##%%%(##(((/**//////*///,,,***,**,,                                                      \r\n\
                                                                                                 *##%&/&&&%%&(@%&&#&%%%%((((/////(/,,,,/*/**,,,.....,.                                                  \r\n\
                                                                                                     %%&#%#&%&&%&&&&&&%%#(((##(//(////(/**,.,,.,,...,...                                                \r\n\
                                                                                                    ,*/(#%&&%&&&&&%%%%%#%#(((////#(//*,,,,,,...............                                             \r\n\
                                                                                                    //%%((#####%%%&%(/*/((((((##(/*.,.,..,..,....................                                       \r\n\
                                                                                                 .(#///(/(((/(#(((((((###((/******,....,..............................                                  \r\n\
                                                                     .,***,**/////************/#%%%%#//((((##(###########/*,,,,.,...,..............................,..,....                             \r\n\
                                                                   *,**,,******************/(#%%%%#///*/(((((((((((#/(((/,,,...,,...................,...,,,...................                          \r\n\
                                                                 ,*,*,,**/*,,,***********/(###%#(((///////((((((//****,*..,..,..............,,,,,..............................,                        \r\n\
";

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
    int fd = setup_uart("/dev/ttyUSB0");
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
