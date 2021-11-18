#include <stdio.h>

int factorial(int n);

int main(void) {
    int base = 3;
    int fac = factorial(base);
    printf("%d! = %d\n", base, fac);
    return 0;
}

// Calculates the factorial of a positive integer.
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
