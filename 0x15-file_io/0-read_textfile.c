#include "holberton.h"

/**
 * read_textfile - Reads a file and prints it to the POSIX stdout.
 * @filename: The name of the file that needs to be read.
 * @letters: Is the number of letters the function should print.
 * Return: The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, numread, numwritten;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	/* ==========   read   ========== */

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	numread = read(fd, buff, letters);
	if (numread == -1)
	{
		free(buff);
		return (0);
	}

	numwritten = write(STDOUT_FILENO, buff, numread);
	if (numwritten == -1 || numwritten != numread)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(fd);

	return (numwritten);
}
