#include "holberton.h"
/**
 * print_line - Print with the lenght of the parameter
 * @n: The character to test
 *
 * Return: Nothing
 *
 */
void print_line(int n)
{
if (n > 0)
{
while (n > 0)
{
_putchar('_');
n--;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
