#include "holberton.h"
/**
 * alloc_grid - Returns a pointer to a 2d array.
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: Return pointer to the array.
 */
int **alloc_grid(int width, int height)
{
	int a;
	int i;
	int j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		ptr[a] = (int *)malloc(sizeof(int) * width);
		if (ptr[a] == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
