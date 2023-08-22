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
	int sum;
	char a;
	srand(time(NULL));

	for (; sum <= 2645;)
	{ 
		a = rand() % 128;
		sum += a;
		_putchar(a);
	}
	_putchar(2772 - sum);
	return (0);
}
