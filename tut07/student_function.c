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

// void initialise_student(struct student *stu_ptr);
struct student initialise_student(struct student stu);

int main(void) {
    struct student stu = {};
    // initialise_student(&stu);
    stu = initialise_student(stu);
    printf("zID: %d, wam: %lf, name: %s\n", stu.zID, stu.wam, stu.name);
    return 0;
}

// void initialise_student(struct student *stu_ptr) {
//     stu_ptr->zID = 5123456;
//     stu_ptr->wam = 74.7;
//     strcpy(stu_ptr->name, "Frankie");
// }

struct student initialise_student(struct student stu) {
    stu.zID = 5123456;
    stu.wam = 74.7;
    strcpy(stu.name, "Frankie");
    return stu;
}