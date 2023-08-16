#include <stdio.h>

/**
*  add - print alpha
* @n: the number to compare
* @a: another number!!!!!
*
* Description: it does smthing
* Return: 0
*/
int main(void)
{
	int i;
    int pastNum = 2;
    int veryPastNum = 1;
    int presentNum;

    printf("%d, %d, ", veryPastNum, pastNum);
    for (i = 1; i <= 48; i++)
    {
        presentNum = pastNum + veryPastNum;

        printf("%d", presentNum);
        if (i != 48)
            printf(", ");
        veryPastNum = pastNum;
        pastNum = presentNum;
    }
    printf("\n");
}