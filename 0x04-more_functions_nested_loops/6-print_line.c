#include "holberton.h"
/**
 * print_line - print the numbers of the main function
 * description: draws a straight line in the terminal
 * @n: draws a straight line in the terminal
 * return (0);
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
	_putchar ('\n');
	}
	else
	{
	for (c = 1 ; c <= n ; c++)
	{
	_putchar ('_');
	}
	_putchar ('\n');
	}
}
