#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array
 * of integers using the Linear search algorithm.
 *
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: (-1)
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t count;

	if (array == NULL)
		return (-1);
	count = 0;
	for (count = 0; count < size; count++)
	{
		printf("Value checked array[%lu] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
	}
	return (-1);
}
