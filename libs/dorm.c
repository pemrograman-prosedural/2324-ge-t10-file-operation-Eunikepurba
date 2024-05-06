#include <stdio.h> 
#include <string.h>
#include <ctype.h>
#include <stdlib.h> // tambahkan ini
#include "dorm.h"

#define MAX_DORMS 100

struct dorm_t dorms[MAX_DORMS];
int num_dorms = 0;

struct dorm_t create_dorm(char *str) {
    struct dorm_t dorm;
    char *token = strtok(str, "#");
    strcpy(dorm.name, token);
    token = strtok(NULL, "#");
    dorm.capacity = atoi(token);
    token = strtok(NULL, "#");
    for(int i = 0; token[i]; i++){
        token[i] = tolower(token[i]);
    }
    strcpy(dorm.gender, token);
    dorm.current = 0;
    return dorm;
}

void add_dorm(struct dorm_t *dorm) {
    if (num_dorms >= MAX_DORMS) {
        fprintf(stderr, "Cannot add more dorms\n");
        return;
    }
    dorms[num_dorms++] = *dorm;
}

void print_all_dorms() {
    for (int i = 0; i < num_dorms; i++) {
        print_dorm(dorms[i]);
    }
}

void print_dorm(struct dorm_t dorm) {
    printf("%s|%d|%s|%d\n", dorm.name, dorm.capacity, dorm.gender, dorm.current);
}