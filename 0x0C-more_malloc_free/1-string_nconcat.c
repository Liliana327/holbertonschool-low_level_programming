#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * longitud - length of a string
 * @str: string t
 * Return: 0;
 */
int longitud(char *str)
{
	int b, m;

	m = 0;
	for (b = 0; str && str[b] != '\0'; b++)
	{
		m++;
	}
	return (m);
}

/**
 * *string_nconcat - function that concatenates two strings
 * @s1: 1 string
 * @s2: 2 string
 * @n: variable
 * Return: 0;
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	int b, m;
	unsigned int a;

	b = 0;
	m = longitud(s1) + n + 1;
	array = malloc(sizeof(char) * m);
	if (array == NULL)
		return (NULL);
	for (a = 0; s1 && s1[a] != '\0'; a++)
	{
		array[b] = s1[a];
		b++;
	}
	for (a = 0; s2 && a < n; a++)
	{
		array[b] = s2[a];
		b++;
	}
	array[b] = '\0';
return (array);
}
