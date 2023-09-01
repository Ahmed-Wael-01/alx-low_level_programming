#include "main.h"

/**
 * _strcpy - does something
 * @dest: a variable
 * @src: a variable
 *
 * Description: a function
 * Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
