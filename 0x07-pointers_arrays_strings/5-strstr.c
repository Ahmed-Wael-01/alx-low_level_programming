#include "main.h"
#include <stdio.h>

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
	int i = 0, j = 0;

	while (*(haystack + i) != '\0')
	{
		for (;*(needle + j) != '\0'; j++)
		{
			if (*(haystack + i + j) == *(needle + j))
			{
                if (*(needle + j + 1) == '\0')
                    return (haystack + i);
                else
                    continue;
            }
            else
                break;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
