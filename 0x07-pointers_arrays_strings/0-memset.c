#include <string.h>
#include "holberton.h"
/**
 * *_memset - Write a function that fills memory with a constant byte
 * @s: pointer
 * @b: whole
 * @n: whole
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *m = s;

	while (n > 0)
	{
	*m = b;
	if (*m == 0)
	break;
	m++;
	n--;
	}
	return (s);
}
