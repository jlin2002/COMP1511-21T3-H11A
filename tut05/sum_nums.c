#include <stdio.h>

void sum_nums(int a, int b, int *sum);

int main(void) {
    printf("Enter 2 values to sum: ");
    int a, b;
    scanf("%d %d", &a, &b);
    
    int sum;
    sum_nums(a, b, &sum);
    printf("The sum is %d\n", sum);
}


// Sums first two inputs and stores result in address that
// 'sum' points at
void sum_nums(int a, int b, int *sum) {
    *sum = a + b;
}

