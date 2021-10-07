// Program that writes square numbers to an array and prints them
// H11A, October 2021

#include <stdio.h>

#define SIZE 20

void write_square_nums(int size, int array[]);
void print_array(int size, int array[]);

int main(void) {
    int square_nums[SIZE] = {0};
    write_square_nums(SIZE, square_nums);
    print_array(SIZE, square_nums);
    return 0;
}

// Writes square numbers to the array
void write_square_nums(int size, int array[]) {
    int i = 0;
    while (i < size) {
        array[i] = i * i;
        i++;
    }
}

// Prints values of the array
void print_array(int size, int array[]) {
    int i = 0;
    while (i < size) {
        printf("%d\n", array[i]);
        i++;
    }
}