#include "holberton.h"
/**
 * array_range - Get the length of a string
 * @min: The min value of the array
 * @max: The max value of the array
 * Return: The length of a string
 */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
		return (NULL);

	array = malloc(sizeof(int) * (max - min) + 1);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
