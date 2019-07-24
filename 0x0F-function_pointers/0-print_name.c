#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - imprime un nombre.
 * @name: vombre.
 * @f: puntero de una funcion.
 * Return: Return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
