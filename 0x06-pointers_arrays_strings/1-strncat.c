#include "holberton.h"
/**
 * *_strncat - takes input from and outputs to the main function
 * @src: pointer
 * @dest: pointer
 * @n: whole
 * Return: (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, i;

	for (m = 0; dest[m] != '\0'; m++)
	{
	}
	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
	dest[m + i] = src[i];
	}
	return (dest);
}
