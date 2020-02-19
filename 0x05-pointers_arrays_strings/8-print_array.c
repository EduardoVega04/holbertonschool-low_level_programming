#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an array
 * @a: the integer to test
 * @n: the integer to test
 * Return: Nothing
 */

void print_array(int *a, int n)
{
int var = 0;
for (n--; n >= 0; n--, var++)
{
printf("%d", a[var]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}
