#include "holberton.h"
/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: string to be checked.
 * @accept: bytes to be looked for.
 * Return: (0)
 */
unsigned int _strspn(char *s, char *accept)
{
	int m;
	char *n;

	for (m = 0; *s; s++, m++)
	{
	for (n = accept; *n && *n != *s; n++)
	{
	}
	if (!*n)
	break;
	}
	return (m);
}

