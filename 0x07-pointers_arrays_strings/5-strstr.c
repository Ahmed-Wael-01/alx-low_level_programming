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
	int i = 0, j;

	while (*(haystack + i) != '\0')
	{
		for (j = 0; *(needle + j) != '\0'; j++)
		{
			if (*(haystack + i + j) == *(needle + j))
			{
				if (*(needle + j + 1) == '\0')
					return (haystack + i);
			}
			else
				break;
		}
		i++;
	}
	return (0);
}
