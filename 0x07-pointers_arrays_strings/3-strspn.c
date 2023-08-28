#include "main.h"

/**
 * _strspn - does something
 * @s: a variable
 * @accept: a variable
 *
 * Description: a function
 * Return: 0
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
				break;
			j++;
		}
		if (*(accept + j) == '\0')
			return (i);
		else
			j = 0;
		i++;
	}
	return (i);
}
