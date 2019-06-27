#include "holberton.h"
/**
 * print_numbers - print the numbers of the main function
 * description: print the numbers from 0 to 9 of the main function
 * null - no return.
 */
void print_numbers(void)
{
	int c;

	for (c = 0 ; c <= 9 ; c++)
	_putchar (c + 48);
	_putchar ('\n');
}
