#include "sort.h"
/**
* selection_sort - is responsible for arranging the arrangement
* @array: is a pointer pointing to the list
* @size: is the size of the list
* Return: every change in the list
*/

void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	unsigned int temp;

	for (i = 0; i < size; i++)
	{
		temp = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[temp] > array[j])
			temp = j;
		}
		if (i != temp)
		{
			Pointer(&array[i], &array[temp]);
			print_array(array, size);
		}
	}
}
/**
* Pointer - position
* @a: pointer
* @b: pointer
*/
void Pointer(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
