// Program that tells the user whether they're in high
// school or not
// Joanna Lin (z5311239), October 2021

#include <stdio.h>
#define MIN_YEAR 7
#define MAX_YEAR 12

int main(void) {
    printf("What year are you in? ");
    int year;
    scanf("%d", &year);
    if (MIN_YEAR <= year && year <= MAX_YEAR) {
        printf("You are in high school\n");
    } else {
        printf("You are not in high school\n");
    }
    return 0;
}


