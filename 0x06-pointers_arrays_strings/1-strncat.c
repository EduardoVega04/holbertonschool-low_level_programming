#include "holberton.h"
/**
 * _strncat - Concatenates two strings
 * @dest: The character to print
 * @src: The character to print
 * @n: The n number of bytes
 * Return: Pointer to dest
 *
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
{
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}
