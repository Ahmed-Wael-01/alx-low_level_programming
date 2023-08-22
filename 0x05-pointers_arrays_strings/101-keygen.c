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
	int j = rand() % 100;

	for (i = 0; i < j; i++)
	{ 
		_putchar(rand() % 100);
	}
	return (0);
}
