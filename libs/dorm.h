#ifndef DORM_H 
#define DORM_H

#include <ctype.h>

#define MAX_DORMS 100

struct dorm_t {
    char name[50];
    int capacity;
    char gender[10];
    int current;
};

extern struct dorm_t dorms[MAX_DORMS];
extern int num_dorms;

struct dorm_t create_dorm(char *str);
void add_dorm(struct dorm_t *dorm);
void print_dorm(struct dorm_t dorm);
void print_all_dorms();

#endif
