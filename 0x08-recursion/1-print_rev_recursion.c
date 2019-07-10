#include "holberton.h"
/**
* _print_rev_recursion - toma un valor de main
* @s: puntero
* Return: no return
*/
void _print_rev_recursion(char *s)
{
	if (*s != 0)
	{
	_print_rev_recursion(s + 1);
	_putchar (*s);
	}
}
