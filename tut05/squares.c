#include <stdio.h>

#define SIZE 7

int main(void) {
    int row, column;
    int array[SIZE][SIZE] = {0};
    // Initialise elements of 2D array to 1
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            array[row][column] = 1;
            column = column + 1;
        }
        row = row + 1;
    }
    // Print out elements of 2D array
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            printf("%d", array[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }    
    return 0;
}