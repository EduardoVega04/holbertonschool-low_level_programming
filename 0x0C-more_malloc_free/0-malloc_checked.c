#include "holberton.h"
/**
 * malloc_checked - Allocates space in memory
 * @b: Size to allocate
 *
 * Return: Pointer to allocated memory or exit if it fails
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
