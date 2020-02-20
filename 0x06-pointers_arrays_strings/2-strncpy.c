#include "holberton.h"
/**
 * _strncpy - Copy a string into another
 * @dest: The character to test
 * @src: The character to test
 * @n: The n number of bytes to manipulate
 * Return: Pointer to dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
int a = 0;
while (a < n)
{
dest[a] = src[a];
a++;
}
return (dest);
}
