#include <stdlib.h>
/**
 * longitud - length of a string
 * @str: string to be calculated
 * Return: the length of the string
 */
int longitud(char *str)
{
	int b, m;

	m = 0;
	for (b = 0; str && str[b] != '\0'; b++)
	{
		m++;
	}
	return (m);
}

/**
*/
char *str_concat(char *s1, char *s2)
{
	char *array;
	int a, b, m;

	b = 0;
	m = longitud(s1) + longitud(s2) + 1;
	if (array == NULL)
	{
		return (NULL);
	}
	for (a = 0; s1 && s1[a] != '\0'; a++)
	{
		array[b] = s1[a];
		b++;
	}
	for (a = 0; s2 && s2[a] != '\0'; a++)
	{
		array[b] = s2[a];
		b++;
	}
	array[b] = '\0';
return (array);
}
