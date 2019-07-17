#include <stdlib.h>
void freeing(int **array, int height);

/**
 * alloc_grid - function that returns a pointer
 * @width: width
 * @height: height
 * Return: pointer 
 */
int **alloc_grid(int width, int height)
{
	int m, a, b;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		array[b] = malloc(sizeof(int) * width);
		if (array[b] == NULL)
		{
			for (; b >= 0; b--)
				free(array[b]);
			free(array);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (a = 0; a < width; a++)
		{
			array[m][a] = 0;
		}
	}
return (array);
}
