#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number int
 * @b: is pointing to a string
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int m;

	if (b == NULL)
		return (0);

	for (m = 0; *b != '\0'; b++)
	{
		if (*b == '1')
			m = (m * 2) + 1;
		else if (*b == '0')
			m *= 2;
		else
			return (0);
	}
	return (m);
}
