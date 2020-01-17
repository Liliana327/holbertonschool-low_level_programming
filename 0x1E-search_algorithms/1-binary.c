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

int binary_search(int *array, size_t size, int value)
{
	size_t count, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (count = left; count < right; count++)
		{
			printf("%d, ", array[count]);
		}
		printf("%d\n", array[count]);
		count = left + (right - left) / 2;
		if (array[count] == value)
			return (count);
		if (array[count] > value)
			right = count - 1;
		else
			left = count + 1;
	}
	return (-1);
}
