// Reads characters in a loop and prints whether they are an 
// alphabetic letter or not
#include <stdio.h>

#include "letters.h"

int main(void) {

    char input;
    printf("Enter letter: ");
    while (scanf(" %c", &input) == 1) {
        if (check_letter(input) == 1) {
            printf("It's a letter!\n");
        } else {
            printf("It's not a letter!\n");
        }

        printf("Enter letter: ");
    }

    return 0;
}