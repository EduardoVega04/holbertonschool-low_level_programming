#ifndef CALC_H_
#define CALC_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
