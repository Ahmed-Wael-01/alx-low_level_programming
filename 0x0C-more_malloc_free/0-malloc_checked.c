#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - does something
 * @b: a variable
 *
 * Description: a function
 * Return: 0
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
