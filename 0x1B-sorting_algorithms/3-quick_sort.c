#include "sort.h"
/**
* selection_sort - is responsible for arranging the arrangement
* @array: is a pointer pointing to the list
* @size: is the size of the list
* Return: every change in the list
*/
void quick_sort(int *array, size_t size)
{
	size_t left = 0, hight = size - 1;

	if (!array == 0)
	if (size == 0)
	if (size == 1)
		return;
	quick_sort_1(array, left, hight, size);
}
/**
*
*
*
*/
void quick_sort_1(int *array, int left, int hight, size_t size)
{
	int cont;

	if (left < hight)
	{
		cont = request(array, left, hight, size);
		quick_sort_1(array, left, cont - 1, size);
		quick_sort_1(array, cont + 1, hight, size);
	}
}
/**
*
*
*
*/
int request(int *array, int left, int hight, size_t size)
{
	int a, b, cont, swap;

	a = left - 1;
	cont = array[hight];
	for (b = left; b <= hight - 1; b++)
	{
		if (array[b] < cont)
		{
			a += 1;
			if (a != b)
			{
				swap = array[b];
				array[b] = array[a];
				array[a] = swap;
				print_array((const int *)array, size);
			}
		}
	}
	if (cont < array[a + 1])
	{
		swap = array[a + 1];
		array[a + 1] = array[hight];
		array[hight] = swap;
		print_array((const int *)array, size);
	}
	return (a + 1);
}
