#include "holberton.h"
/**
 * *_strncpy - takes input from and outputs to the main function
 * @src: pointer
 * @dest: pointer
 * @n: whole
 * Return: (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for ( ; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
