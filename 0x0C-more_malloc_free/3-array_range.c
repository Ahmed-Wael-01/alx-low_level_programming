#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - does something
 * @min: a variable
 * @max: a variable
 *
 * Description: a function
 * Return: 0
*/

int *array_range(int min, int max)
{
	int len = max - min + 1;
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * len);
	if (!arr)
		return (NULL);
	for (i = 0; i < len; i++)
		arr[i] = min + i;
	return (arr);
}
