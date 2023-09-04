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

	while (*(s1 + len1))
		len1++;
	while (*(s2 + len2))
		len2++;
	str = malloc(sizeof(char) * (len1 + len2) + 1);
	if (!str)
		return (NULL);
	for (i = 0; *(s1) != '\0'; i++)
		*(str + i) = *(s1 + i);
	for (i = 0; *(s2) != '\0'; i++)
		*(str + len1 + i) = *(s2 + i);
	*(str + len1 + len2 + 1) = '\0';
}
