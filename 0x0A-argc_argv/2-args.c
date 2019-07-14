#include <stdio.h>
#include "holberton.h"
/**
 * main - imprime el nombre
 * @argc: numero de argumentos 
 * @argv: strings.
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	while (argc--)
	printf("%s\n", *argv++);
	return (0);
}
