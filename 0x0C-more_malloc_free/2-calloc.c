#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - does something
 * @nmemb: a variable
 * @size: a variable
 *
 * Description: a function
 * Return: 0
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		*(ptr + i) = 0;
	return (ptr);
}
