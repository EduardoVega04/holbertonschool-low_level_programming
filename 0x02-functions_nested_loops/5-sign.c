#include "holberton.h"

/**
 * print_sign - writes the character c to stdout
 * @n: The character to test
 *
 * Return: 1, 0 and -1 depending of the result
 *
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
