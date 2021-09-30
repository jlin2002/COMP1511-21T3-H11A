// Program that counts up from 1 to a given number
// H11A, September 2021

#include <stdio.h>

int main(void) {
    printf("Enter finish: ");
    int finish;
    scanf("%d", &finish);
    
    int i = 1;
    while (i <= finish) {
        printf("%d\n", i);
        i++; 
    }
    return 0;
}
