#include "holberton.h"
/**
 * *_memcpy - Write a function that copies memory area.
 * @src: pointer to the destination array where the content is to be copied.
 * @dest: This is pointer to the source of data to be copied.
 * @n: This is the number of bytes to be copied.
 * Return: (dest)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	char *m = src;
	char *i = dest;
	int a;

	while (a < 0)
	{
	a = 0;
	if (a == 0)
	break;
	i[a] = m[a];
	a++;
	n++;
	}
	return (dest);
}
