#include "holberton.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: The character to print
 *
 * Return: The value of the last digit
 *
 */
int print_last_digit(int n)
{
int x, y;
x = n % 10;
if (x < 0)
x = -x;
y = '0' + x;
_putchar(y);
return (x);
}

