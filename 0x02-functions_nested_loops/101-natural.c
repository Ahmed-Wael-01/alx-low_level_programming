#include "main.h"
#include <stdio.h>

/**
* nature - print alpha
*
* Description: it does smthing
* Return: 0
*/
int main(void)
{
	int endPoint = 1024;
	int total = 0;
	int i;

	for ( ; i < endPoint ; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			total += i;
	}
	printf("%d\n", total);
	return (0);
}
