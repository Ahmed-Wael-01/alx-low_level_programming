#include "main.h"

/**
 * _strchr - does something
 * @s: a variable
 * @c: a variable
 *
 * Description: a function
 * Return: 0
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	do {
		if (*(s + i) == c)
			return (s + i);
	} while (*(s + i++) != '\0');
	return ('\0');
}
