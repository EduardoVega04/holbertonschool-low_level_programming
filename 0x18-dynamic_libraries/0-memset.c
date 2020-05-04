#include "holberton.h"
#include <unistd.h>
/**
 * _memset - Sets the first n bytes of *s with the content of b
 * @s: The string to manipulate
 * @b: The string to manipulate
 * @n: The number of bytes to manipulate
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
