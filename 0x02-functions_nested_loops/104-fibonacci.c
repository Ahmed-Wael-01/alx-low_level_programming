#include <stdio.h>

/**
*  main - print alpha
*
* Description: it does smthing
* Return: 0
*/
int main(void)
{
	int i;

	long double pastNum = 2;
	long double veryPastNum = 1;
	long double presentNum;

	printf("%.0lf, %.0lf, ", veryPastNum, pastNum);
	for (i = 1; i <= 96; i++)
	{
		presentNum = pastNum + veryPastNum;

		printf("%.0lf", presentNum);
		if (i != 96)
			printf(", ");
		veryPastNum = pastNum;
		pastNum = presentNum;
	}
	printf("\n");
	return (0);
}
