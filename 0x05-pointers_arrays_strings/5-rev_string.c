#include "holberton.h"
/**
* rev_string - toma la cadena de la funcion.
* @s: value taken from main
* Return: (0)
*/
void rev_string(char *s)
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
