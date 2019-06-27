#include "holberton.h"
/**
 * print_square - prints a square, followed by a new line
 * description: prints a square, followed by a new line
 * @size:  prints a square, followed by a new line
 * return (0);
 */
void print_square(int size)
{
	int c;
	int m;

	if (size <= 0)
	{
	_putchar ('\n');
	}
	else
	{
	for (c = 1 ; c <= size ; c++)
	{
	for (m = 1 ; m <= size ; m++)
	{
	_putchar ('#');
	}
	_putchar ('\n');
	}
}
}
