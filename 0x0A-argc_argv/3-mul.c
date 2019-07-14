#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * main - multiplica dos cumeros
 * @argc: numero de argumentos
 * @argv: string
 * Return: (0);
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc <= 2)
	{
	printf("Error\n");
	return (1);
	}
	else
	{
	mult = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mult);
	return (0);
	}
}
