#include "search_algos.h"

/**
 * linear_search - find an element using linear
 * @array: array of elements
 * @size: size of the array
 * @value: value to search for
 *
 * Description: finds a value in an array
 * Return: returns the index of the value
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
