#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in memory,
 * @str: string 
 * Return: NULL
 */
char *_strdup(char *str)
{
	int m;
	int i;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}
	for (m = 0; str[m] != '\0'; m++)
	;
	array = malloc(m + 1);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < m; i++)
	{
		array[i] = str[i];
	}
		array[i] = '\0';
return (str);
}
