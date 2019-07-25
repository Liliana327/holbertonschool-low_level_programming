#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*main - punto de entrada
*@argc: cuenta de arguments
*@argv: array
*Return: (0);
*/
int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "+")) && strcmp(argv[2], "-") &&
	strcmp(argv[2], "/") && strcmp(argv[2], "*") &&
	strcmp(argv[2], "%"))
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
	 && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", (*get_op_func(argv[2]))(a, b));
	return (0);
}
