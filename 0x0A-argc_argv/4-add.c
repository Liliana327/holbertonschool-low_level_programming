#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * main - dumeros posituvos
 * @argc: numero de argumentos
 * @argv: strinp
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	int m;
	int n;
	int s = 0;

	for (m = 1; m < argc; m++)
	{
	for (n = 0; *(*(argv + m) + n) != '\0' ; n++)
	{
	if (*(*(argv + m) + n) < 48 || *(*(argv + m) + n) > 57)
	{
	printf("Error\n");
	return (1);
	}
	}
	s += atoi(*(argv + m));
	}
	printf("%d\n", s);
	return (s);
}
