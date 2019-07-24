#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - imprime un nombre.
 * @array: array
 * @size: numero de elementos en la matrizarray
 * @cmp: puntero que comparara el valor
 * Return: Return.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (array == NULL || cmp == NULL)
	return (-1);
	if (size <= 0)
	return (-1);
	for (m = 0; m < size; m++)
	{
	if (cmp(array[m]) != 0)
	return (m);
	}
	return (-1);
}

