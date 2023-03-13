#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int h, w, a, b;
	char *dim;

	h = height;
	w = width;

	dim = malloc(sizeof(char) * (h * w));
	if (dim == NULL)
	{
		return (NULL);
	}

	if (w || h < 1)
	{
		return (NULL);
	}

	for (a = 0; a < h * w; a++)
	{
		dim[a] = 0;
	}

	for (a = 0; a < h; a++)
	{
		for (b = 0; b < w; b++)
		{
			printf("%d ", dim[a * b]);
		}
	}
	return (0);
}
