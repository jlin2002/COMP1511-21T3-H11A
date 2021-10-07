// Program that gets 2 numbers from the user and prints their sum
// and their parity
// H11A, October 2021

#include <stdio.h>

int main(void) {
    // Getting the numbers from the user.
    int num1;
    int num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    // Tell the user the sum.
    int sum = num1 + num2;
    printf("Your numbers add up to %d\n", sum);

    // Tell the user the parity of the numbers.
    if (sum % 2 != 0) {
        // Their sum is odd, so one number must be odd and the other is even.
        if (num1 % 2 == 0) {
            printf("The first number you've typed was even and the second "
                "number was odd\n");
        } else {
            printf("The first number you've typed was odd and the second "
                "number was even\n");
        }
    } else {
        // Their sum is even, so either the numbers are both odd or both even.
        if (num1 % 2 == 0) {
            printf("Both the numbers you've typed were even\n"); 
        } else {
            printf("Both the numbers you've typed were odd\n");
        }
    }

    return 0;
}