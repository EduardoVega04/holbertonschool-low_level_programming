#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void array_iterator(int *array, size_t size, void (*action)(int));
void print_elem(int elem);
void print_elem_hex(int elem);
int int_index(int *array, int size, int (*cmp)(int));

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
