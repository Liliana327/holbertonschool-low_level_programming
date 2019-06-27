#include "holberton.h"
/**
 * more_numbers - print the numbers of the main function
 * description: prints numbers, from 0 to 9, it is repeated 14 times
 * return (0);
 */
void more_numbers(void)
{
	int c;
	int m;

	for (c = 0 ; c <= 9 ; c++)
	{
	for (m = 0 ; m <= 14 ; m++)
	{
	if (m > 9)
	_putchar (m / 10 + 48);
	_putchar (m % 10 + 48);
	}
	_putchar ('\n');
	}
}
