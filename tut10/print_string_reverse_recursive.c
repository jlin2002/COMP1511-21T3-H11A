#include <stdio.h>

void print_string_reverse(char *string);

int main(void) {
    char string[10] = "Hi!!!";
    print_string_reverse(string);
    printf("\n");
    return 0;
}
// How to print string in reverse recursively:
// Base case: if string is empty, then print nothing
// Recursive case: we print the reverse of the string starting from the character after the first
// and then print the first character
void print_string_reverse(char *string) {
    if (string[0] == '\0') {
        return;
    } else {
        print_string_reverse(&string[1]);
        printf("%c", string[0]);
    }
}