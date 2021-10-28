#include <stdio.h>
#define MAX_SIZE 10
int main(void) {
    char line[MAX_SIZE];
    fgets(line, MAX_SIZE, stdin);
    printf("%s", line);
    return 0;
}