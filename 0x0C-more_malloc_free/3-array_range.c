#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - function that allocates memory for an array
 * @min: min
 * @max: max
 * Return: array
 */
int *array_range(int min, int max)
{
	int *array;
	int m;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	for (m = 0; min <= max; m++)
	{
		array[m] = min;
		min++;
		}
	return (array);
}
