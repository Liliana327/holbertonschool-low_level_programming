#include "holberton.h"
/**
* _puts - toma la cadena de la funcion.
* @str: value taken from main
* Return: (0)
*/
void _puts(char *str)
{
	int len;

	for (len = 0 ; str[len] != '\0' ; len++)
	{
	_putchar(str[len]);
	}
	_putchar('\n');
}
