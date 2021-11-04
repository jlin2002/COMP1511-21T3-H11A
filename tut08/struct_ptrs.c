// Program that introduces malloc and free
// H11A, November 2021
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 50

struct student {
    char name[MAX_LENGTH];
    int mark;
};

struct student *create_student(char *name, int mark);

int main(void) {
    struct student *student_p = create_student("Tom Kunc", 71);
    printf("Name: %s, Mark: %d\n", student_p->name, student_p->mark);
    free(student_p);
    return 0;
}

// Creates a struct student given a name and mark and returns
// a pointer to it
struct student *create_student(char *name, int mark) {
    struct student *stu_p = malloc(sizeof(struct student));
    strcpy(stu_p->name, name);
    stu_p->mark = mark;
    return stu_p;
}


