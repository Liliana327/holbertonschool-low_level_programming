#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_numbers - function that prints numbers
*@n: entero.
*Return: (0)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list arguments;
	
	va_start(arguments, n);

	if (separator == NULL)
	{
	return;
	}	
	for (m = 0; m < n; m++)
	{
	printf("%d", va_arg(arguments, int));
		if (m < n - 1)
		{
		printf (", ");
		}
	}
	va_end(arguments);
	putchar('\n');
}
