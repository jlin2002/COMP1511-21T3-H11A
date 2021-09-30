// Program that represents time using a struct
// H11A, September 2021

#include <stdio.h>

struct time {
    int hour;
    int minute;
    char meridiem;
};

int main(void) {
    struct time bedtime
    // 10:30 pm
    bedtime.hour = 10;
    bedtime.minute = 30;
    bedtime.meridiem = 'p';
    
    // Bedtime: HH:MM [ap]m
    printf("Bedtime: %d:%02d %cm\n", bedtime.hour, bedtime.minute, bedtime.meridiem);
    return 0;
}
