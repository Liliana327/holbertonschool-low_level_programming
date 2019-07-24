#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - función que ejecua un parametro de una matriz
 * @array: puntero
 * @size: tamaño de la matr
 * @action: puntero de la funcion.
 * Return: Return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t m;

	if (array == NULL || action == NULL)
	return;
	for (m = 0; m < size; m++)
	action(array[m]);
}
