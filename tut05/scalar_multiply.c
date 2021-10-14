#include <stdio.h>

void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar);
void print_array(int rows, int columns, int matrix[rows][columns]);

int main(void) {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 3, 2}
    };
    scalar_multiply(2, 3, matrix, 2);
    print_array(2, 3, matrix);
    return 0;
}

// takes in a 2D array of ints and multiplies every value in the array by a given scalar
void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar) {
    int row = 0;
    while (row < rows) {
        int column = 0;
        while (column < columns) {
            matrix[row][column] = matrix[row][column] * scalar;
            column++;
        }
        row++;
    }
}

void print_array(int rows, int columns, int matrix[rows][columns]) {
    int row = 0;
    while (row < rows) {
        int column = 0;
        while (column < columns) {
            printf("%d ", matrix[row][column]);
            column++;
        }
        printf("\n");
        row++;
    }
}