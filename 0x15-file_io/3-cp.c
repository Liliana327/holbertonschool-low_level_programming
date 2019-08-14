#include <stdio.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
**/
int main(int argc, char * argv[])
{
	int fd00 = 0, fd01 = 0, len = 0;
	char m[1024];

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd00 = open(argv[1], O_RDONLY);
	if (fd00 == -1)
		exit(98);

	fd01 = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (fd01 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	len = read(fd00, m, 1024);
	len = write(fd01, m, len);
	if (fd01 == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	close(fd00);
	close(fd01);
	return (0);
}
