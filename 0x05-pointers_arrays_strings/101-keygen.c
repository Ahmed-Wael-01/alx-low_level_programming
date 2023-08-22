#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - does something
 *
 * Description: a function
 * Return: 0
*/

char main(void)
{
	int i = 0;
	char *pswrd;
	srand(time(NULL));

	for (i = 0; i < 10; i++)
	{
		pswrd[i] = rand() % 100;
	}
	return pswrd;
}
