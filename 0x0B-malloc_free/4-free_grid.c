#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - it is a function
 * @grid: a parameter
 * @height: a parameter
 *
 * Description: it does something
 * Return: 0
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
