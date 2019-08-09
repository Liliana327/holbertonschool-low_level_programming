#include "holberton.h"

/**
 * set_bit - unction that sets the value of a bit to 1
 * @n: pointer to number being modified
 * @index: is the index, starting from 0
 * Return: 1 on succes or -1 if error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m = 1, a;

	for (a = 0; a < index; a++)
	{
		if (m > m << 1)
			return (-1);
		m <<= 1;
	}
	*n = m | *n;
	return (1);
}
