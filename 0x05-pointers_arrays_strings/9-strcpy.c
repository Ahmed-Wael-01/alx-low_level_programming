#include "main.h"

/**
 * _strcpy - does something
 * @dest: a variable
 * @src: a variable
 *
 * Description: a function
 * Retuen: dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i - 1] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
