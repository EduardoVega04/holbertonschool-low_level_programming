#include "holberton.h"
/**
 * _strncat - Concatenates two strings with a condition
 * @dest: The character to print
 * @src: The character to print
 * @n: The n number of bytes
 * Return: Pointer to dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0' && b < n)
{
dest[a] = src[b];
a++;
b++;
}
return (dest);
}
