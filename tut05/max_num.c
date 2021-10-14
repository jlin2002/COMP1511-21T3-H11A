#include <stdio.h>
int *max_num(int *a, int *b);

int main(void) {
    printf("Enter 2 values: ");
    int a, b;
    scanf("%d %d", &a, &b);
    int *max = max_num(&a, &b);
    printf("The larger value is %d\n", *max);
    return 0;
}

// returns the address of the greater of two integers stored at the addresses
int *max_num(int *a, int *b) {
    /*
        a, b -- addresses
        *a, *b -- integers
    */
    if (*a > *b) {
        return a;
    } else {
        return b;
    }
}
