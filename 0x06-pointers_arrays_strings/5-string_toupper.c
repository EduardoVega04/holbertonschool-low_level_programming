#include "holberton.h"
/**
 * string_toupper - change a string to upper case
 * @s: string to test
 * Return: s
 */
char *string_toupper(char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
i++;
}
return (s);
}
