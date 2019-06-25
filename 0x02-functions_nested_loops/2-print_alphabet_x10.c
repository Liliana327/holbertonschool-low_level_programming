#include "holberton.h"
/**
* print_alphabet_x10 - in lowercase, followed by a new line.
*
* Return: (0)
*/
void print_alphabet_x10(void)
{
char b;
int m;
for (m = '0' ; m <= '9' ; m++)
{
	for (b = 'a' ; b <= 'z' ;  b++)
	{
		_putchar (b);
	}
_putchar ('\n');
}
}
