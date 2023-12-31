#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function entry-point
 *
 * Description: returns a pointer to a 2D grid
 * @height: rows of grid
 * @width: columns of grid
 * Return: NULL on failure, pointer to string otherwise
 */

int **alloc_grid(int width, int height)
{
	int i, j,  **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = (int **)malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * width);
			if (a[i] == NULL)
			{
				for (; i >= 0; i--)
					free(a[i]);
				free(a);
				return (NULL);
			}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	return (a);
}
