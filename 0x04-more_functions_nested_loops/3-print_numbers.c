#include "holberton.h"
/**
 * print_numbers - Print numbers from 0 to 9 - writes the character c to stdout
 *
 * Return: Nothing
 *
 */
void print_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
_putchar(i);
}
_putchar('\n');
}
