// Print triangle of certain size using asterisks and bars
// H11A, September 2021

#include <stdio.h>

int main(void) {
    printf("Enter size: ");
    int size;
    scanf("%d", &size);
    int i = 0;
    while (i < size) {
        int j = 0;
        while (j < size) {
            if (j <= i) {
                printf("*");
            } else {
                printf("-");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
