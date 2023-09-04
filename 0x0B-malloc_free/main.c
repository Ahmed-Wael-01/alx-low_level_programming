#include <stdio.h>
#include <stdlib.h>

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
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(str + i) = *(s1 + i);
	for (i = 0; *(s2 + i) != '\0'; i++)
		*(str + len1 + i) = *(s2 + i);
	*(str + len1 + len2 + 1) = '\0';
	return (str);
}

/**
 * main - check the code .
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = str_concat("world", "Hello");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}