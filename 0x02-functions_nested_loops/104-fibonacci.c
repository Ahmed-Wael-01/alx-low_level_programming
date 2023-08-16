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
	unsigned int pastNum = 2;
	unsigned int veryPastNum = 1;
	unsigned int presentNum;

	printf("%lu, %lu, ", veryPastNum, pastNum);
	for (i = 1; i <= 96; i++)
	{
		presentNum = pastNum + veryPastNum;

		printf("%lu", presentNum);
		if (i != 96)
			printf(", ");
		veryPastNum = pastNum;
		pastNum = presentNum;
	}
	printf("\n");
	return (0);
}
