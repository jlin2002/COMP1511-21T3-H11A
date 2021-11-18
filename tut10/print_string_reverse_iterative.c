#include <stdio.h>
#include <string.h>
void print_string_reverse(char *string);

int main(void) {
    char string[10] = "Hi!!!";
    print_string_reverse(string);
    printf("\n");
    return 0;
}

void print_string_reverse(char *string) {
    int i = strlen(string) - 1;
    while (i >= 0) {
        printf("%c", string[i]);
        i--;
    }
}