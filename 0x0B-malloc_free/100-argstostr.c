#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * length - it is a function
 * @av: a parameter
 *
 * Description: it does something
 * Return: 0
*/

unsigned int length(char *av)
{
	unsigned int i;

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
	int i = 0, j, bpoint = 0;
	unsigned int size = 0;
	char *str;

	while (i < ac)
		size += length(*(av + i++));
	str = malloc(sizeof(char) * size);
	if (!ac || !av || !str)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; *( *(av + i) + j) != '\0'; j++)
			*(str + bpoint++) = *(*(av + i) + j);
		*(str + bpoint++) = '\n';
	}
	return (str);
}
