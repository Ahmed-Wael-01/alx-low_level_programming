#include "main.h"
#include <stdio.h>

/**
 * _memset - does something
 * @s: a variable
 * @b: a variable
 * @n: a variable
 *
 * Description: a function
 * Return: 0
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
