#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Null
 */
int **alloc_grid(int width, int height)
{
	int w, x, y, z;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (w = 0; w < height; w++)
	{
		p[w] = malloc(sizeof(int) * width);

		if (p[w] == NULL)
		{
			for (x = w; w >= 0; w--)
			{
				free(p[x]);
			}

		free(p);
		return (NULL);
		}
	}
	for  (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
		{
			p[y][z] = 0;
		}
	}
	return (p);
}
