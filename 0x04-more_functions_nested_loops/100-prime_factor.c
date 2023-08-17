#include "main.h"
#include <stdio.h>

/**
* main - it does something
*
* Description: function that checks for uppercase character
* Return: 0
*/

int main(void)
{
	long int prime;
	long int if_prime;
	long int NUMBER = 612852475143;

	for (prime = NUMBER / 2; prime > 1; prime--)
	{
		if (prime % 2 == 0)
			continue;
		if (NUMBER % prime == 0)
		{
			for (if_prime = prime / 2; if_prime > 1; if_prime--)
			{
				if (prime % if_prime == 0)
					break;
			}
			if (if_prime == 1)
				printf("%lu\n", prime);
			break;
		}
	}
	return (0);
}
