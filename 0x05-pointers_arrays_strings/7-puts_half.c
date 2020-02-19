#include "holberton.h"
/**
 * puts_half - Prints the last half of a string
 * @str: The character to test
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
i++;
for (i /= 2; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
