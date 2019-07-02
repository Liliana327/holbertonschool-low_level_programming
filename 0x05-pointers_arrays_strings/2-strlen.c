#include "holberton.h"
/**
 * _strlen - toma un valor de main
 * @s: puntero
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	len++;
	return (len);
}
