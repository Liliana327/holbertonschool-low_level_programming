#include "holberton.h"

/**
 * print_binary - prints the binary
 * @n: number to be printed
 * Return: (void)
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1;

	while (m < n)
	{
		if (m > m << 1)
			break;
		m <<= 1;
	}
	if (n != 0 && m > n)
		m >>= 1;
	while (m > 0)
	{
		if ((n & m) == 0)
			_putchar('0');
		else
			_putchar('1');
		m >>= 1;
	}
}
