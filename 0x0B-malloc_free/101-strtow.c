#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * wordcount - it is a function
 * @str: a parameter
 *
 * Description: it does something
 * Return: 0
*/

int wordcount(char *str)
{
	int i;
	int count;

	while (*(str + i) == ' ')
		i++;
	for (count = 0; *(str + i) != '\0'; i++)
	{
		if (*(str + i) != ' ')
			continue;
		else if (*(str + i) == ' ' && *(str + i - 1) != ' ')
			count++;
	}
	if (*(str + i) == '\0' && *(str + i - 1) != ' ')
		count++;
	return (count);
}

/**
 * strtow - it is a function
 * @str: a parameter
 *
 * Description: it does something
 * Return: 0
*/

char **strtow(char *str)
{
	int i, j, counter = 0, bp = 0;
	char **ptr = malloc(sizeof(char *) * wordcount(str) + 1);

	if (str == NULL || *str == '\0' || !ptr)
		return (NULL);
	for (i = 0; i < wordcount(str); i++)
	{
		while (*(str + bp) == ' ')
			bp++;
		while (*(str + bp + counter) != ' ')
			counter++;
		*(ptr + i) = malloc(sizeof(char) * counter);
		if (!*(ptr + i))
			return (NULL);
		for (j = 0; *(str + bp) != ' ' || *(str + bp) != '\0'; j++, bp++)
			*(*(ptr + i) + j) = *(str + bp);
		*(*(ptr + i) + j) = '\0';
	}
	*(ptr + i) = NULL;
	return (ptr);
}
