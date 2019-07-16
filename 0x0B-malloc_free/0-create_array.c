#include <stdlib.h>
/**
 * create_array - function that creates an array of chars, and initializes it with a specific char.
 * @size: size the array
 * @c: char the array
 * Return: (*array)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int m;
	char *array;
	
	if (size == 0)
	{
		return (NULL);
	}
	array =  malloc(sizeof(c) * size);
	if (array == NULL)
	{	
		return (NULL);
	}
	for (m = 0; m <= size; m++)
	{
	 array[m] = c;
	}
return(array);
}
