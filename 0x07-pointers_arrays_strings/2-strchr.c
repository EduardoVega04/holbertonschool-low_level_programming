#include "holberton.h"
/**
 * _strchr - Locates a character in a string
 * @s: The string to test
 * @c: The character to test
 * Return: Pointer to s
 *
 */
char *_strchr(char *s, char c)
{
if (s == NULL)
{
return (NULL);
}
for (;; s++)
{
if (*s == c)
{
return (s);
}
if (!*s)
return (NULL);
}
}
