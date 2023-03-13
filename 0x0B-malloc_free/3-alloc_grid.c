#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - This returns a pointer to a two dimentional array of integers
 * @width: This represents the rows
 * @height: This represents the columns
 * Return: Pointer
 */
int **alloc_grid(int width, int height)
{
	int a, b;
	int **dim;

	if ((height || width) < 1)
	{
		return (NULL);
	}

	dim = (int **) malloc(sizeof(int *) * height);
	if (dim == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		dim[a] = (int *) malloc(sizeof(int) * width);
		if (dim[a] == NULL)
		{
			free(dim);
			for (; a >= 0; a--)
			{
				free(dim[a]);
			}
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			dim[a][b] = 0;
		}
	}

	return (dim);
}
