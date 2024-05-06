#include <stdio.h> 
#include <string.h>
#include <ctype.h>
#include <stdlib.h> // tambahkan ini
#include "student.h"
#include "dorm.h"

#define MAX_STUDENTS 100

struct student_t students[MAX_STUDENTS];
int num_students = 0;

struct student_t create_student(char *str) {
    struct student_t mhs;
    char *token = strtok(str, "#");
    strcpy(mhs.id, token);
    token = strtok(NULL, "#");
    strcpy(mhs.name, token);
    token = strtok(NULL, "#");
    mhs.year = atoi(token);
    token = strtok(NULL, "#");
    for(int i = 0; token[i]; i++){
        token[i] = tolower(token[i]);
    }
    strcpy(mhs.gender, token);
    strcpy(mhs.dorm_name, "unassigned");
    return mhs;
}

void print_student(struct student_t mhs) {
    printf("%s|%s|%d|%s|%s\n", mhs.id, mhs.name, mhs.year, mhs.gender, mhs.dorm_name);
}

void assign_student_to_dorm(char *student_id, char *dorm_name) {
    for (int i = 0; i < num_students; i++) {
        if (strcmp(students[i].id, student_id) == 0) {
            strcpy(students[i].dorm_name, dorm_name);
            return;
        }
    }
    fprintf(stderr, "Student not found\n");
}
