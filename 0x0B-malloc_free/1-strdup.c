#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - function duplicate string
 *
 *@str: string
 *Return: null
 *
*/
char *_strdup(char *str)
{
int x, i;
char *m;
if (str == NULL)
{
return (NULL);
}
for (x = 0; str[x] != '\0'; x++)
;
printf("%d\n", x);
m = (char *) malloc(x * sizeof(*str) + 1);
if (m == 0)
{
return (NULL);
}
else
{
for (i = 0; i < x; i++)
m[i] = str[i];
}
return (m);
}
