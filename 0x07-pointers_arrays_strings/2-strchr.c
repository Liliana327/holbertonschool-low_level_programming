#include "holberton.h"
/**
 * *_strchr - Write a function that locates a character in a string.
 * @s: pointer to the destination array where the content is to be copied.
 * @c: This is the number of bytes to be copied.
 * Return: ('\0')
 */
char *_strchr(char *s, char c)
{
	for ( ; *s != '\0'; s++)
	{
	if (*s == c)
	return (s);
	}
	return ('\0');
}
