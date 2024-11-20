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
    static char ok_chars[] = "abcdefghijklmnopqrstuvwxyz"
                             "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                             "1234567890_-.@";
    char cmd[BUFSIZE] = "wc -c < ";

    
    // Overflow protection
    int cmd_length = strlen(argv[1]);
    if (cmd_length > 248) {
        printf("Please enter a shorter filename");
        return -1;
    }  
    // Sanitize
    // char *cp = argv[1];
    // const char *end = argv[1] + strlen(argv[1]);

    // for (cp += strspn(cp, ok_chars); cp != end; cp += strspn(cp, ok_chars)) {
        // *cp = '_';
    // }
    
    // Call system
    // strncat(cmd, argv[1], 248);
    // system(cmd);
    
    // Alternate call
    argv[0] = cmd
    argv[2] = NULL
    execvp(cmd, argv)
}
