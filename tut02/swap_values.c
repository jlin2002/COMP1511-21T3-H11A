// Program that swaps two variables
// Joanna Lin, September 2021

#include <stdio.h>
int main(void) {
    int x;
    int y;
    // Scan in two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
  
    // Print variables before swap
    printf("(Before) x: %d, y: %d\n", x, y);

    // Swap x and y 
    int temp = x;
    x = y;
    y = temp;

    // Print variables after swap
    printf("(Before) x: %d, y: %d\n", x, y);
    return 0;
}