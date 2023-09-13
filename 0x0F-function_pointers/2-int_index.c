#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - it is a function
 * @array: a parameter
 * @size: a parameter
 * @cmp: a parameter
 *
 * Description: it does something
 * Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (NULL);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(i) != 0)
			return (i);
	}
	return (-1);
}
