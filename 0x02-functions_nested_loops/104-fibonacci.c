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

	double pastNum = 2.0;
	double veryPastNum = 1.0;
	double presentNum;

	printf("%.0f, %.0f, ", veryPastNum, pastNum);
	for (i = 1; i <= 96; i++)
	{
		presentNum = pastNum + veryPastNum;

		printf("%.0f", presentNum);
		if (i != 96)
			printf(", ");
		veryPastNum = pastNum;
		pastNum = presentNum;
	}
	printf("\n");
	return (0);
}
