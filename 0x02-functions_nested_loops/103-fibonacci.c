#include <stdio.h>

/**
*  main - print alpha
*
* Description: it does smthing
* Return: 0
*/
int main(void)
{
	long int total = 2;
	long int pastNum = 2;
	long int veryPastNum = 1;
	long int presentNum = 0;

	while (presentNum <= 4000000)
	{
		presentNum = pastNum + veryPastNum;

		if (presentNum % 2 == 0)
			total += presentNum;
		veryPastNum = pastNum;
		pastNum = presentNum;
	}
	printf("%ld\n", total);
	return (0);
}
