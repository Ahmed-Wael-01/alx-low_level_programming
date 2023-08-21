#include "main.h"

/**
 * _strlen - does something
 * @s: a variable
 *
 * Description: a function
 * Return: 0
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
