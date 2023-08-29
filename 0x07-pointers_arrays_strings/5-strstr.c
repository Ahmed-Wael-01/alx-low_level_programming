#include "main.h"

/**
 * _strstr - does something
 * @haystack: a variable
 * @needle: a variable
 *
 * Description: a function
 * Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
	}
	return (0);
}
