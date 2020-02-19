#include "holberton.h"
/**
 * puts2 - prints every other character of a string
 * @str: The character to test
 *
 * Return: Nothing
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
i++;
}
putchar('\n');
}
