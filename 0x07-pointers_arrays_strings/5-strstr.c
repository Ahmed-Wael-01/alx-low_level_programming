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
	int j;

	while (*(haystack) != '\0')
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + j) == *(needle + j))
			{
				if (*(needle + j + 1) == '\0')
					return (haystack);
			}
			else
				break;
		}
		haystack++;
	}
	return (0);
}
