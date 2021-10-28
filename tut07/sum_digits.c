// Program that reads in characters until EOF and prints the count and sum
// of the digits
// H11A, October 2021.
#include <stdio.h>

int main(void) {
    int sum = 0;
    int count = 0;
    int character;
    while ((character = getchar()) != EOF) {
        if ('0' <= character && character <= '9') {
            sum += character - '0';
            count++;
        }
    }
    printf("Input contained %d digits which summed to %d\n", count, sum);
    return 0;
}