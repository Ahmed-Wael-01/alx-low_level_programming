#include "main.h"

/**
*  _isupper - it does something
* @c: a variable
*
* Description: function that checks for uppercase character
* Return: 0
*/

int _isupper(int c)
{
    if (c >= 65 && c <= 90)
        return (1);
    else
        return (0);
}