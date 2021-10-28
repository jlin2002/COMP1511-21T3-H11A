// Struct pointers example
// H11A, October 2021

#include <string.h>
#include <stdio.h>

#define MAX_NAME_LENGTH 200

struct student {
    int zID;
    double wam;
    char name[MAX_NAME_LENGTH];
};

int main(void) {
    struct student stu;
    struct student *stu_ptr = &stu;
    stu_ptr->zID = 5123456;
    stu_ptr->wam = 74.7;
    strcpy(stu_ptr->name, "Frankie");
    printf("zID: %d, wam: %lf, name: %s\n", stu_ptr->zID, stu_ptr->wam, stu_ptr->name);
    printf("zID: %d, wam: %lf, name: %s\n", stu.zID, stu.wam, stu.name);
    return 0;
}