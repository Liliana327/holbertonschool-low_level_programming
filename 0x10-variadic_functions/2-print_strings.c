#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
*print_strings - function that prints strings
*@n: entero.
*@separator: separador,
*Return: (0)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	va_list arguments;
	char *a;

	if (n == 0)
	return;
	va_start(arguments, n);
	for (m = 0; m < n; m++)
	{
	a = va_arg(arguments, char *);
	if (a == NULL)
	printf("(nil)");
	else
	printf("%s", a);
		if (separator == NULL)
		continue;
		if (m < n - 1)
		{
		printf("%s", separator);
		}
	}
	va_end(arguments);
	putchar('\n');
}
