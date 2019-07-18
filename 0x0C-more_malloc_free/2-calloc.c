#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @size: tama√o.
 * @nmemb: arreglo
 * Return: (*array)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int m;
	char *array;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	array =  malloc((nmemb) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < (size * nmemb); m++)
	{
		array[m] = 0;
	}
return (array);
}
