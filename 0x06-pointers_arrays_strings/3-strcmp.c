#include "holberton.h"
/**
 * *_strcmp - takes input from and outputs to the main function
 * @s2: pointer
 * @s1: pointer
 * Return: (dest)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
	if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
	}
	return (0);
}
