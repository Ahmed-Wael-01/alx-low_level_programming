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
	long int biggest;
	long int NUMBER = 612852475143;
	
	printf("%ld\n", NUMBER);

	for (prime = 3; prime < NUMBER / 2; prime++)
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
			{
				biggest = prime;
				if (biggest > 100000)
					break;
			}
		}
	}
	printf("%lu\n", biggest);
	if (prime == 1)
	{
		printf("%lu\n", prime);
	}
	return (0);
}
