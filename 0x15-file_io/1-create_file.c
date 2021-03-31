#include "holberton.h"

/**
 * create_file - Function that create a file and its content.
 * @filename: The name of the file to be created.
 * @text_content: NULL terminated string to write to the file..
 * Return: 1 on success or -1 on failure..
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, numwritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;

		numwritten = write(fd, text_content, len);
		if (numwritten == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
