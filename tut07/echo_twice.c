// A program that echoes user lines twice
// H11A, October 2021

#include <stdio.h>
#define MAX_SIZE 4096
int main(void) {
    char line[MAX_SIZE];
    while (fgets(line, MAX_SIZE, stdin) != NULL) {
        printf("%s", line);
        printf("%s", line);
    }
    return 0;
}