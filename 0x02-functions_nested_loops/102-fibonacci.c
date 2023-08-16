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
	long int pastNum = 2;
	long int veryPastNum = 1;
	long int presentNum;

	printf("%ld, %ld, ", veryPastNum, pastNum);
	for (i = 1; i <= 48; i++)
	{
		presentNum = pastNum + veryPastNum;

		printf("%ld", presentNum);
		if (i != 48)
			printf(", ");
		veryPastNum = pastNum;
		pastNum = presentNum;
	}
	printf("\n");
	return (0);
}
