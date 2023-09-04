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
	int len = 0;
	char *newstr;

	while (*(str + len))
		len++;
	newstr = malloc(sizeof(char) * len + 1);
	if (str == NULL || !newstr)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		*(newstr + i) = *(str + i);
	*(newstr + i) = *(str + i);
	return (newstr);
}
