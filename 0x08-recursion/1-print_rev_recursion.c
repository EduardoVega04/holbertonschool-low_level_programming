#include "holberton.h"
/**
 * _puts_recursion - Prints a string in reverse
 * @s: The string to test
 * Return: nothing
 */
void _puts_recursion(char *s)
{
if (*s)
{
_puts_recursion(s + 1);
putchar(*s);
}
}
