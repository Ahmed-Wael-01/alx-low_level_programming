#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - it is a function
 * @str: a parameter
 *
 * Description: it does something
 * Return: 0
*/

char *_strdup(char *str)
{
	int i;
	char *newstr = malloc(sizeof(str));

	if (!str)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		*(newstr + i) = *(str + i);
	*(newstr + i) = *(str + i);
	return (newstr);
}
