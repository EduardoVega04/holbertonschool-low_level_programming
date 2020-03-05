#include "holberton.h"
/**
 * _realloc - Reallocates a space in memory
 * @ptr: The pointer with allocated size in memory
 * @old_size: Current allocated size
 * @new_size: The new size to realloc
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size > old_size)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	return (ptr);
}
