// Program that echoes command line arguments
// H11A, October 2021
#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;
    while (i < argc) {
        int j = 0;
        while (argv[i][j] != '\0') {
            putchar(argv[i][j]);
            j++;
        }
        putchar('\n');
        i++;
    }
    return 0;
}