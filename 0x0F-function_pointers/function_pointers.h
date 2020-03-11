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

#endif
