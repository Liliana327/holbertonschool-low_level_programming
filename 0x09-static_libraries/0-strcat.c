#include <string.h>
#include "holberton.h"
/**
 * *_strcat - takes input from and outputs to the main function
 * @src: pointer
 * @dest: pointer
 * Return: (dest)
 */
char *_strcat(char *dest, char *src)
{
	int m, n;

	for (m = 0; dest[m] != '\0'; m++)
	{
	}
	for (n = 0; src[n] != '\0' ; )
	{
	dest[m] = src[n];
	m++;
	n++;
	}
	dest[m] = '\0';
	return (dest);
}
