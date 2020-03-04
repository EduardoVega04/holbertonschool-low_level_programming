#include "holberton.h"
/**
 * free_grid - Returns a pointer to a 2d array.
 * @grid: Two dimentional array
 * @height: Height of the array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
