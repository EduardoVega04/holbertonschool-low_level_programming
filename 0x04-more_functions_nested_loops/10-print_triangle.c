#include "holberton.h"
/**
 * print_triangle - Prints a triangle of n size
 * @size: The integer to test
 *
 * Return: Nothing
 *
 */
void print_triangle(int size)
{
int i;
int j;

if (size <= 0)
{
_putchar ('\n');
}
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
if (j <= (size - i))
{
_putchar (' ');
}
else
{
_putchar ('#');
}
}
_putchar ('\n');
}
}
