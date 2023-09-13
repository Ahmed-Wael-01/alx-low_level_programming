#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * array_iterator - it is a function
 * @array: a parameter
 * @size: a parameter
 * @action: a parameter
 *
 * Description: it does something
 * Return: 0
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
