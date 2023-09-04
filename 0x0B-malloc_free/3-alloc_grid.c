#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - it is a function
 * @width: a parameter
 * @height: a parameter
 *
 * Description: it does something
 * Return: 0
*/

int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **square;

	square = malloc(sizeof(int *) * height);
	if (height <= 0 || width <= 0 || !square)
	{
		free(square);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(square + i) = malloc(sizeof(int) * width);
		if (!square)
		{
			free(square);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			*(*(square + i) + j) = 0;
	}
	return (square);
}
