#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - does something
 *
 * Description: a function
 * Return: 0
*/

int main(void)
{
	int i = 0;
	srand(time(NULL));

	for (i = 0; i < rand() % 120; i++)
	{ 
		_putchar(rand() % 169);
	}
	return (0);
}
