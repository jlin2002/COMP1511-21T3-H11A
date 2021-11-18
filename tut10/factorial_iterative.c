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
    int ans = 1;
    int i = 1;
    while (i <= n) {
        ans *= i;
        i++;
    }
    return ans;
}
