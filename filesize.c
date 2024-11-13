#include <string.h>
#include <stdio.h>
#include <stdlib.h>
 
#define BUFSIZE 256
    
// This program prints the size of a specified file in bytes
int main(int argc, char** argv) {
    // Ensure that the user supplied exactly one command line argument
    if (argc != 2) { 
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }
    char cmd[BUFSIZE] = "wc -c < ";
    
    cmd_length = strlen(argv[1]);
    if (cmd_length > 248) {
        strcat(cmd, argv[1]);
        system(cmd);
    } else {
        printf("Please enter a shorter filename");
        return 0;
    }
}
