#include "holberton.h"
/**
 * _strcat - writes the character c to stdout
 * @dest: The character to test
 * @src: The character to test
 *
 * Return: Concatenated strings.
 *
 */
char *_strcat(char *dest, char *src)
{
int a = 0;
int b = 0;
while (dest[a] != '\0')
{
a++;
}
while (src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
