#include "holberton.h"
/**
* _isdigit - function that checks for a digit (0 through 9)
* @c: print number
* Returns 1 if c is a digit
* Returns 0 otherwise
* Return: (0)
*/
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
