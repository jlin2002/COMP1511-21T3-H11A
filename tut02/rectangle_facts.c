// A program that prints facts about a rectangle of specified dimensions
// H11A, September 2021

#include <stdio.h>
#define MAX_LENGTH 45000

int main(void) {
    int width;
    int height;
    
    printf("Enter width and height (less than %d): ", MAX_LENGTH);
    scanf("%d %d", &width, &height);
    printf("Width: %d, Height: %d\n", width, height);
    
    int are_lengths_valid = 0 < width && width < MAX_LENGTH && 
                            0 < height && height < MAX_LENGTH;
    if (!are_lengths_valid) {
        printf("Enter a postive number less than %d\n", MAX_LENGTH);
        return 1;
    } 
    
    int area = width * height;
    int perimeter = 2 * (height + width);
    printf("Area: %d, Perimeter: %d\n", area, perimeter);

    return 0;
}
