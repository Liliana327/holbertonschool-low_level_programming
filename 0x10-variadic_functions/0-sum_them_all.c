#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*sum_them_all - function that returns the sum of all its parameters
*@n: entero.
*Return: (0)
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int m;
	va_list arguments;

	va_start(arguments, n);
	if (n == 0)
		{
		return (0);
		}
	for (m = 0; m < n; m++)
		{
		sum += va_arg(arguments, int);
		}
	va_end(arguments);
	return (sum);
}
