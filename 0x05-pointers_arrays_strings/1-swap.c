#include "holberton.h"
/**
 * swap_int - swaps the values of two integers
 * @a: The integer to test
 * @b: The integer to test
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
int valor_a = *a;
*a = *b;
*b = *valor_a;
}
