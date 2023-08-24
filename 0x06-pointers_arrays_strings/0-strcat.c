#include "main.h"

/**
 * _strcat - does something
 * @dest: a variable
 * @src: a variable
 *
 * Description: a function
 * Return: dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, counter = 0;

	while (dest[counter] != '\0')
		counter++;
	while (src[i] != '\0')
	{
		dest[counter + i] = src[i];
		i++;
	}
	dest[counter + i] = '\0';
	return (dest);
}
