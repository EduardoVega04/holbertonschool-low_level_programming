#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int get_string (char *s);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void simple_print_buffer(int *buffer, unsigned int size);
