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

	for (i = 0; i < 70; i++)
	{ 
		putchar(rand() % 128);
	}
	return (0);
}
