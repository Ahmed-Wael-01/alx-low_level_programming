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
int i = 0, words = 0;

while (i <= len(str))
{
if ((str[i] != ' ') && (str[i] != '\0'))
{
i++;
}
else if (((str[i] == ' ') || (str[i] == '\0')) && i && (str[i - 1] != ' '))
{
words += 1;
i++;
}
else
{
i++;
}
}
return (words);
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
	int i, j, counter, bp = 0;
	int words = wordcount(str);
	char **ptr = malloc(sizeof(char *) * words + 1);

	if (str == NULL || *str == '\0' || !ptr || !words)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		while (*(str + bp) == ' ')
			bp++;
		for (counter = 0; *(str + bp + counter) != ' '; counter++)
			;
		*(ptr + i) = malloc(sizeof(char) * counter + 1);
		if (!*(ptr + i))
			return (NULL);
		for (j = 0; *(str + bp) != ' ' && *(str + bp) != '\0'; j++, bp++)
			*(*(ptr + i) + j) = *(str + bp);
		*(*(ptr + i) + j) = '\0';
	}
	*(ptr + i) = NULL;
	return (ptr);
}
