#include "holberton.h"
/**
 * print_diagonal - print the numbers of the main function
 * description: draws a diagonal line on the terminal.
 * @n: draws a diagonal line on the terminal.
 * return (0);
 */
void print_diagonal(int n)
{
	int c;
	int m;

	if (n <= 0)
	_putchar ('\n');
	else
	for (c = 1 ; c <= n ; c++)
	{
	for (m = 1 ; m <= c ; m++)
	{
	if (m == c)
	_putchar ('\\');
	else
	_putchar (' ');
	}
	_putchar ('\n');
	}
}
