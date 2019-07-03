#include "holberton.h"
/**
 * puts2 - prints one char out of 2 of a string
 *
 * @str: pointer
 *
 * Return: (0)
 */
void puts2(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
	if (m % 2 == 0)
	{
	_putchar(str[m]);
	}
	}
	_putchar('\n');
}
