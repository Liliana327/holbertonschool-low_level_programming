#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid
 * @grid: double pointer
 * @height: height the array
 * Return: (0)
 */
void free_grid(int **grid, int height)
{
	int m;

	for (m = 0; m < height; m++)
		free(grid[m]);
	free(grid);
}
