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

    if (n < 0)
    {
        n = -n;
        _putchar('-');
    }
    while (n / i > 0 )
    {
        i *= 10;
    }
    i /= 10;
    for (;i > 0; i /= 10)
    {
        _putchar('0' + ((n / i) % 10));
    }
}
