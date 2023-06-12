#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates a grid
 * @width: the number of columns
 * @height: the number of rows
 * Return: the allocated grid
 */
int **alloc_grid(int width, int height)
{
	int i, column, row, j;
	int **allocatedGrid;

	if (width <= 0 || height  <= 0)
		return (NULL);
	allocatedGrid = (int **)malloc(height * sizeof(int *));
	if (allocatedGrid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		allocatedGrid[i] = (int *)malloc(width * sizeof(int));
		if (allocatedGrid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(allocatedGrid[j]);
			}
			free(allocatedGrid);
		}
	}
	for (row = 0; row < height; row++)
	{
		for (column = 0; column < width; column++)
		{
			allocatedGrid[row][column] = 0;
		}
	}
	return (allocatedGrid);
}

