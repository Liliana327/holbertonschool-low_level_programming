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

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}
	for (m = 1; m < argc; m++)
	{
	for (n = 0; argv[m][n] != '\0'; n++)
	{
	if (argv[m][n])
	continue;
	else
	{
	printf("Error\n");
	return (1);
	}
	}
	n += atoi(argv[m]);
	}
	printf("%d\n", n);
	return (0);
}

