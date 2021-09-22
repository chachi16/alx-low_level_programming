#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the array
 * @height: height of the array
 *
 * Return: a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int a, b, **grid;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (a = 0 ; a < height ; a++)
	{
		grid[a] = malloc(sizeof(int) * width);
		if (grid[a] == NULL)
		{
			for (a = a - 1; a >= 0 ; a--)
			{
				free(grid[a]);
			}
			free(grid);
			return (NULL);
		}
		for (b = 0 ; b < width ; b++)
		{
			grid[a][b] = 0;
		}
	}
	return (grid);
}
