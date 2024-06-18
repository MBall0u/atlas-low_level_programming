#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2D array of ints
 * Description - see above comment
 * @width: the number of columns in the 2D array
 * @height: the number of rows in the 2D array
 * Return: always 0 (success)
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	while (1)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(int *) * width);
			for (j = 0; j < width; j++)
			{
				grid[i][j] = 0;
			}
		}
		return (grid);
	}
	return (NULL);
}
