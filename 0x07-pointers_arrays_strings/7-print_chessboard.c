#include "holberton.h"
/**
 * print_chessboard - prints a chessboard
 * @a: an array of 8 characters
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	unsigned int co;
	unsigned int in;

	for (co = 0; co < 8; co++)
	{
	for (in = 0; in < 8; in++)
	_putchar(a[co][in]);
	_putchar('\n');
	}
}
