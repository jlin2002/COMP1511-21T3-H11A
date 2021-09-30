// Print square of specified size using asterisks
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
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
