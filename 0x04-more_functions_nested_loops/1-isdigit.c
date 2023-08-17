#include "main.h"

/**
*  _isdigit - it does something
* @c: a variable
*
* Description: function that checks for uppercase character
* Return: 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
