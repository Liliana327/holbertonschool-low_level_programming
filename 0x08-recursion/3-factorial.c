#include "holberton.h"
/**
 * factorial - Calculating the factorial of a number
 * @n: number to be calculated
 * Return: factorial calculation
 */
int factorial(int n)
{
	if (n < '\0')
	return (-1);
	if (n <= 1)
	return (1);
	return (n * factorial(n - 1));
}
