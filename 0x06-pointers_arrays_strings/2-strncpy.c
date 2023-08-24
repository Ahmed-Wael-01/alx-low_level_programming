#include "main.h"

/**
 * _strncpy - does something
 * @dest: a variable
 * @src: a variable
 * @n: a variable
 *
 * Description: a function
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0')
	{
		if (i + 1 <= n)
		{
		dest[i] = src[i];
		i++;
			if (src[i] == '\0')
			{
				dest[i] = '\0';
				return (dest);
			}
		}
		else
			break;
	}
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
