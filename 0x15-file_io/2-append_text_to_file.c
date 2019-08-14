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
 * append_text_to_file - appends texts to a file
 * @filename: the name of the file
 * @text_content: NULL terminated string the file
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (write(fd, text_content, _strlen(text_content)) == -1)
		return (-1);

	close(fd);
	return (1);
}
