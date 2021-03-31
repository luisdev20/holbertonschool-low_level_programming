#include "holberton.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file that needs to be read.
 * @text_content: The NULL terminated string to add.
 * Return: on success 1
 *         otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, numwritten;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
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
