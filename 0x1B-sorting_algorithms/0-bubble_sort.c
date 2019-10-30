#include "sort.h"
/*
*/

/*funcion que se encargara de ordenar el arreglo*/

void bubble_sort(int *array, size_t size)
{
    unsigned int i, j;
    int temp;

	for (i = 1; i < size; i++)
	{		
		for (j = 0; j < size - 1; j++)
		
			if (array[j] > array[j+1])
			{
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			print_array(array, size);
			}
        }
        /*cuando la variable ordenado sea igual a 0
          significara que el arreglo este ordenado
          y no sera necesario seguir recorriendo el
          arreglo para hacer comparaciones*/

}
