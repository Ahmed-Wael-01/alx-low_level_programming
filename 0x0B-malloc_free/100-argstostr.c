#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * length - it is a function
 * @av: a parameter
 * @count: a parameter
 *
 * Description: it does something
 * Return: 0
*/

int length(char *av)
{
	int i;

	for (i = 0; *(av + i) != '\0'; i++)
		i++;
	return (i);
}

/**
 * argstostr - it is a function
 * @ac: a parameter
 * @av: a parameter
 *
 * Description: it does something
 * Return: 0
*/

char *argstostr(int ac, char **av)
{
	int i, j, bpoint, size;
	char **str;

	str = malloc(sizeof(char) * ac);
	if (!ac || !av || !str)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		size = length(*(av + i));
		*(str + i) = malloc(sizeof(char) * size);
		if (!*(str + i))
			return (NULL);
		for (j = 0; j < size; j++)
			*(*(str + i) + j) = *(*(av + i) + j);
		*(*(str + i) + j) = '\n';
	}
	return (str);
}
