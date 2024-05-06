#ifndef STUDENT_H 
#define STUDENT_H

#include <ctype.h>

#define MAX_STUDENTS 100

struct student_t {
    char id[10];
    char name[50];
    int year;
    char gender[10];
    char dorm_name[50];
};

extern struct student_t students[MAX_STUDENTS];
extern int num_students;

struct student_t create_student(char *str);
void print_student(struct student_t mhs);
void assign_student_to_dorm(char *student_id, char *dorm_name);

#endif

