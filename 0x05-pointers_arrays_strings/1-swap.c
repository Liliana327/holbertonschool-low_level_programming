#include "holberton.h"
/**
* swap_int - toma un valor de main
* @a: puntero
* @b: puntero
* Return: (0)
*/
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
