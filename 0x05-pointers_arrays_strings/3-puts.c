#include "holberton.h"
/**
 * _puts - Prints a string, followed by a new line
 * @str: The string to test
 *
 * Return: Nothing
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
