#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_numbers - function that prints numbers
*@n: entero.
*@separator: separadores
*Return: (0)
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	int num = 0;
	va_list arguments;

	va_start(arguments, n);

	for (m = 0; m < n; m++)
	{
		num = va_arg(arguments, int);
		printf("%d", num);
		if (separator != NULL && m != n - 1)
			printf("%s", separator);
	}
	va_end(arguments);
	printf("\n");
}
