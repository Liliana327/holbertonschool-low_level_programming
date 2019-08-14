#include "holberton.h"
/**
 * _strlen - takes input from main
 * @s: pointer to input from main
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: a NULL terminated string to be written to the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd < 0)
	{
		if (errno == EEXIST)
		{
			fd = open(filename, O_WRONLY | O_TRUNC);
			if (fd == -1)
				return (-1);
		}
		else
			return (-1);
	}

	if (write(fd, text_content, _strlen(text_content)) == -1)
		return (-1);

	close(fd);
	return (1);
}
