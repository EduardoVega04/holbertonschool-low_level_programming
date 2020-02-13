#include "holberton.h"
/**
 * print_diagonal - Prints a diagonal line on the terminal
 * @n: The character to test
 *
 * Return: Nothing
 *
 */
void print_diagonal(int n);
{
int i;
int j;

if (n <= 0)
_putchar('\n');

for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
}
_putchar(92);
_putchar('\n');
}
