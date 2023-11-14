#include "main.h"

/**
*  _isalpha - print alpha
* @c: the number to compare
*
* Description: it does smthing
* Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
