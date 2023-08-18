#include "main.h"

/**
* print_number - it does something
* @size: a variable
*
* Description: function that checks for uppercase character
* Return: 0
*/

void print_number(int n)
{
	int i = 10;
    int num = n;

    if (num < 0)
    {
        num = -num;
        _putchar('-');
    }
    while (num / i > 0 )
    {
        i *= 10;
    }

    i /= 10;

    while (i > 0)
    {
        _putchar('0' + ((num / i) % 10));
        i /= 10;
    }
}
