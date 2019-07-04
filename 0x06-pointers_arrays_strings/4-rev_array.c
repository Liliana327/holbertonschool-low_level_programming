#include "holberton.h"
/**
* reverse_array - toma la cadena de la funcion.
* @a: puntero
* @n: entero
* Return: (0)
*/
void reverse_array(int *a, int n)
{
	int len;
	int m;
	char *a;
	char *e;



	char b;

	a = s;
	e = s;
	for (len = 0; s[len] != '\0'; len++)
		;
	for (m = 0; m < len - 1; m++)
		e++;
	for (m = 0; m < len / 2; m++)
	{
		b = *e;
		*e = *a;
		*a = b;
		a++;
		e--;
	}
}
