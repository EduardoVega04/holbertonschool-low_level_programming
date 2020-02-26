#include "holberton.h"
/**
 * _puts_recursion - Prints a string with recursion
 * @s: The string to print
 * Return: Pointer to dest
 *
 */
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
s++;
_puts_recursion(s);
}
else
_putchar('\n');
}
