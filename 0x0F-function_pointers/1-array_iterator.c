#include "function_pointers.h"
/**
 * array_iterator - Function that prints arrays
 * @array: Array to print
 * @size: Size of array
 * @action: Pointer to function
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
