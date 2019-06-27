#include "holberton.h"
/**
 * print_number - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int c;

	for (c = 0 ; c <= 9 ; c++)
	_putchar (c + 48);
	_putchar ('\n');
}
