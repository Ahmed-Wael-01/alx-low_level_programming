#include <stdio.h>

/**
*  main - print alpha
*
* Description: it does smthing
* Return: 0
*/
int main(void)
{
	long long int total;
	long int pastNum = 2;
	long int veryPastNum = 1;
	long int presentNum = 0;

	printf("%ld, %ld, ", veryPastNum, pastNum);
	while (presentNum <= 4000000)
	{
		presentNum = pastNum + veryPastNum;

		if (presentNum % 2 == 0)
			total += presentNum;
		veryPastNum = pastNum;
		pastNum = presentNum;
	}
	printf("%lld\n", total);
	return (0);
}
