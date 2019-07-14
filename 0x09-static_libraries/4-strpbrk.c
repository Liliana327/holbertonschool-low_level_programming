#include "holberton.h"
#include <stddef.h>

/**
 * _strpbrk - unction that searches a string for any of a set of bytes.
 * @s: string to be searched.
 * @accept: bytes to be searched for.
 * Return: '\0'
 */
char *_strpbrk(char *s, char *accept)
{
	int m;

	for ( ; *s != '\0'; s++)
	{
	for (m = 0; accept[m] != '\0'; m++)
	{
	if (*s == accept[m])
	return (s);
	}
	}
	return ('\0');
}
