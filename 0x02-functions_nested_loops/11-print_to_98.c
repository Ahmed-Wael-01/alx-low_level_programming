#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print alpha
* @n: why are we still here?
*
* Description: it does smthing
* Return: 0
*/
void print_to_98(int n)
{
	int RETRO = 98;

	if (n <= 98)
	{
		for (; n <= RETRO ; n++)
		{
			if (n == RETRO)
				printf("%d\n", RETRO);
			else
				printf("%d, ", n);
		}
	}
	else
	{
		for (; n >= RETRO ; n--)
		{
			if (n == RETRO)
				printf("%d\n", RETRO);
			else
				printf("%d, ", n);
		}
	}
}
