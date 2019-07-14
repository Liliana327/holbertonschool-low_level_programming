#include <stdio.h>
/**
 * main - imprime numero.
 * @argc: numero de argumentos.
 * @argv: variable.
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	argc -= 1;
	printf("%d\n", argc);
	return (0);
}
