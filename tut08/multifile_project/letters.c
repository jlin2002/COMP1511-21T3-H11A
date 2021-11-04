#include "letters.h"

// Function that checks whether input is an alphabetic letter
int check_letter(char ch) {
    return ('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z');
}

