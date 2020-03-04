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
	int **m;
	int i, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	/* Assign memory at the rows */
	m = (int **) malloc(height * sizeof(int *));
	if (m == NULL)
	{
		free(m);
		return (NULL);
	}
	/* Assign memeory to each element*/
	for (i = 0; i < height; i++)
	{
		m[i] = (int *) malloc(width * sizeof(int));
		if (m[i] == NULL)
		{
			free(m);
			return (NULL);
		}
	}
	/* Initialize each element */
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			m[x][y] = 0;
		}
	}
	return (m);
}
