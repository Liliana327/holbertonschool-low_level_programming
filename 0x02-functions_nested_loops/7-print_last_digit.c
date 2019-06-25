#include "holberton.h"
/**
* print_last_digit - rints the last digit of a number.
* @m : The character to print
* Return: (0)
*/
int print_last_digit(int m)
{
	int a = m % 10;

	if (a < 0)
	{
	a *= -1;
	}
	_putchar('0' + a);
	return (a);
}
