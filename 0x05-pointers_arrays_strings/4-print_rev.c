#include "holberton.h"
/**
 * print_rev - Prints a string in reverse
 * @s: The string to test
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
int i, j;
int contador = 0;
for (i = 0; s[i] != '\0'; i++)
{
contador++;
}
for (j = contador; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
