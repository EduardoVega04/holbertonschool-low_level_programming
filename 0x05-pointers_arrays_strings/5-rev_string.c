#include "holberton.h"
/**
 * rev_string - Reverses a string
 * @s: The character to test
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
int a, b, i, d;
for (i = 0; s[i] != '\0'; i++)
{
b = i;
}
for (a = 0; a < i / 2; a++)
{
d = s[a];
s[a] = s[b];
s[b] = d;
b--;
}
}
