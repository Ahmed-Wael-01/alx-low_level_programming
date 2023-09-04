#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - it is a function
 * @size: a parameter
 * @c: a parameter
 *
 * Description: it does something
 * Return: 0
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char * ar;

	if (!size)
		return NULL;
	ar = malloc(size * sizeof(c));

	for (i = 0; i < size; i++)
		*(ar + i) = c;
	if (ar)
		return (ar);
	else
		return NULL;
}