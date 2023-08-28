#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - does something
 * @s: a variable
 * @accept: a variable
 *
 * Description: a function
 * Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
