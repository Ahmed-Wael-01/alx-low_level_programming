#include <stdio.h>
#include <stdlib.h>

char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *newstr;

    if (!str)
		return (NULL);
	while (*(str + len))
		len++;
	newstr = malloc(sizeof(char) * len + 1);
	if (!newstr)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		*(newstr + i) = *(str + i);
	*(newstr + i) = *(str + i);
	return (newstr);
}


/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = _strdup(NULL);
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	free(s);
	return (0);
}