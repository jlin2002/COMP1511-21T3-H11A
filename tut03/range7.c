// Program that prints all numbers divisible by 7 within a certain range
// H11A, September 2021

#include <stdio.h>

int main(void) {
    int lower;
    int upper;
    printf("Enter lower bound: ");
    scanf("%d", &lower);
    printf("Enter upper bound: ");
    scanf("%d", &upper);
    
    int i = lower;
    while (i <= upper) {
        if (i % 7 == 0) {
            printf("%d\n", i);
        }
        i++;
    }
    return 0;
}
