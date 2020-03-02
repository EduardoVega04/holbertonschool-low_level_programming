#include "holberton.h"
#include <unistd.h>
/**
 * _memcpy - Copy a string into another
 * @dest: The string in which the content will be copied
 * @n: The n number of bytes to manipulate
 * @src: The string to copy (source)
 * Return: Pointer to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	if (dest == NULL)
		return (NULL);
	if (src == NULL)
		return (dest);
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
