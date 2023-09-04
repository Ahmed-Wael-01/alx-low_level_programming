#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - it is a function
 * @s1: a parameter
 * @s2: a parameter
 *
 * Description: it does something
 * Return: 0
*/

char *str_concat(char *s1, char *s2)
{
	int i;
	int len1 = 0;
	int len2 = 0;
	char *str;

	if (s1 == NULL)
		len1 = 0;
	else
		while (*(s1 + len1))
			len1++;
	if (s2 == NULL)
		len2 = 0;
	else
		while (*(s2 + len2))
			len2++;
	str = malloc(sizeof(char) * (len1 + len2) + 1);
	if (!str)
		return (NULL);
	for (i = 0; i < len1; i++)
		*(str + i) = *(s1 + i);
	for (i = 0; i < len2; i++)
		*(str + len1 + i) = *(s2 + i);
	*(str + len1 + len2 + 1) = '\0';
	return (str);
}
