#include "main.h"
#include <stdio.h>

/**
 * _memcpy - does something
 * @dest: a variable
 * @src: a variable
 * @n: a variable
 *
 * Description: a function
 * Return: 0
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
