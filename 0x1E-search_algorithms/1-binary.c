#include "search_algos.h"

/**
 * binary_search - search with binary search
 * @array: array of elements
 * @size: size of the array
 * @value: value to be found
 *
 * Description: finds the value in the given array
 * Return: index of the value
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, m, i;

	while (l <= r)
	{
		m = (l + r) / 2;
		printf("Searching in array:");
		for (i = l; i < r; i++)
		{
			printf(" %d,", array[i]);
		}
		printf(" %d\n", array[i]);
		if (value > array[m])
			l = m + 1;
		else if (value < array[m])
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}
