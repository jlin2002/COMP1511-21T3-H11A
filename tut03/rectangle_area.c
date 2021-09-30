// Program that prints rectangle area of specified width and height
// H11A, September 2021

#include <stdio.h>

int main(void) {
    printf("Enter dimensions: ");
    
    int height;
    int width;
    scanf("%d %d", &height, &width);
    while (height < 0 || width < 0) {
        printf("Enter positive values: ");
        scanf("%d %d", &height, &width);
    } 
    
    printf("Area: %d\n", height * width);
    return 0;
}
