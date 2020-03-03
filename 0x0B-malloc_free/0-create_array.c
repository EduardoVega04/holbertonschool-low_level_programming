#include "holberton.h"
/**
 * create_array - Creates and array of char
 * @size: Size of the array
 * @c: Character to initialize tha array
 *
 * Return: Pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(c) * size);
	int i;

	if(size == 0)
		return NULL;

	for(i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return ptr;
}
