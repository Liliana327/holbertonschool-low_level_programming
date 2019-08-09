#include "holberton.h"

/**
 * get_bit - unction that returns the value of a bit at a given index.
 * @n: number to be looked through
 * @index: is the index, starting from 0
 * Return: the bit at the index or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int m = 1, a;

	for (a = 0; a < index; a++)
	{
		if (m > m << 1)
			return (-1);
		m <<= 1;
	}
	if ((m & n) > 0)
		return (1);
	else
		return (0);
}
