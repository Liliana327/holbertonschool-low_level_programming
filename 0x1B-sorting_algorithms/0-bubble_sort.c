#include "sort.h"
/*
* bubble_sort - is responsible for arranging the arrangement
* @array: is a pointer pointing to the list
* @size: is the size of the list
* Return: every change in the list
*/

void bubble_sort(int *array, size_t size)
{
	unsigned int i, j;
	int temp;

	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)

			if (array[j] > array[j + 1])
			{
			temp = array[j];
			array[j] = array[j + 1];
			array[j + 1] = temp;
			print_array(array, size);
			}
	}
}
