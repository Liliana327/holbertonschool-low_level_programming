#include "holberton.h"
/**
 * read_textfile - reads a text file and prints it to POSIX stdout
 * @filename: name of the file to be read.
 * @letters: number of letters to be read and printed.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, num_cont = 1, len_cont = 1;
	char *buffer = malloc(sizeof(char) * letters + 1);

	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd != -1)
		len_cont = read(fd, buffer, letters);
	else
		len_cont = 0;

	buffer[letters] = '\0';

	num_cont = write(STDOUT_FILENO, buffer, len_cont);

	if (num_cont == -1)
		len_cont = 0;

	close(fd);
	free(buffer);
	return (len_cont);
}
