#include "holberton.h"
/**
 * _calloc - Allocates memory for an array of nmemb elements of size bytes each
 * @nmemb: The number of elements of the array
 * @size: The size of each nmemb element
 * Return: Pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	return (array);
}
