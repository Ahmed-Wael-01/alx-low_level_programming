#include "main.h"

/**
 * _strncat - does something
 * @dest: a variable
 * @src: a variable
 * @n: a variable
 *
 * Description: a function
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, counter = 0;

	while (dest[counter] != '\0')
		counter++;
	while (src[i] != '\0')
	{
		if (i + 1 <= n)
		{
			dest[counter + i] = src[i];
			i++;
		}
		else
			break;
	}
	dest[counter + i] = '\0';
	return (dest);
}
