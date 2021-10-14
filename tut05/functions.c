//
// Author: <class code>
// Date: <date>
//
// Description:
// Attempt to implement each of the functions that may or may not be valid
// in the Week 5 tutorial.


#include <stdio.h>

int array_length(int nums[]);
int test_all_positive(int nums[]);
int test_all_initialized(int length, int nums[]);
int test_all_positive(int length, int nums[]);

int main(void) {

    int first_array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int second_array[7] = {-6, 8, 1, -4, 3, 0, -4};

    return 0;
}

/*
 * Hello tutors! Clarissa (the original author of the code here) wants to tell
 * you her hidden formula for function comments that may be useful to tell your
 * students and is what she used in this sample code you may want to use for
 * your class.
 *
 * Her formula is:
 * - one line for the description,
 * - one line for the inputs, and
 * - one line for the return value/output
 * at minimum. If a function requires more explanation, that is perfectly fine!
 */

// Gets the length of the array
// Takes in an array
// Returns the length of the array
// NOT POSSIBLE TO WRITE BECAUSE WE DON'T KNOW WHERE THE END OF THE ARRAY IS.
int array_length(int nums[]) {
    int count = 0;
    while (not at end of array) {
        count++;
    }
    return count;
}

// Tests all values in the array are positive
// Takes in an array
// Returns 1 if each value is positive and 0 if not
// NOT POSSIBLE TO WRITE BECAUSE WE DON'T KNOW THE SIZE OF THE ARRAY.
int test_all_positive(int nums[]) {
    int i = 0;
    while (i < ???) {
        if (nums[i] <= 0) {
            return 0;
        }
        i++;
    }
    return 1;
}

// Tests all values in the array are initialised
// Takes in an array and its length
// Returns 1 if each value is initialised and 0 if not
// NOT POSSIBLE TO WRITE BECAUSE WE DON'T KNOW HOW TO CHECK WHETHER A VARIABLE
// IS INITIALISED OR NOT
int test_all_initialized(int length, int nums[]) {
    
}

// Tests all values in the array are positive
// Takes in an array and its length
// Returns 1 if each value is positive and 0 if not
int test_all_positive(int length, int nums[]) {
    int i = 0;
    int neg_found = 0;
    while (i < length && neg_found == 0) {
        if (nums[i] <= 0) {
            neg_found = 1;
        }
        i++;
    }
    if (neg_found) {
        return 0;
    } else {
        return 1;
    }
}
