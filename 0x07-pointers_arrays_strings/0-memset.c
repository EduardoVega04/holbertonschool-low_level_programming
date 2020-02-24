#include "holberton.h"
/**
 * _memset - Sets the first n bytes of *s with the content of b
 * @s: The string to copy the content
 * @b: The content to be copied
 * @n: The n number of bytes
 * Return: Pointer to s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
