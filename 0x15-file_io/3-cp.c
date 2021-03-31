#include "holberton.h"

/**
 * main - Program that copies the content of a file to another file.
 * @argc: Number of arguments to the program.
 * @argv: Array of pointers passed by arguments.
 * Return: 0 on success.
 *         Otherwise:
 *         Incorrect argument count - exit code 97.
 *         file_from no existing  or unreadable - exit code 98.
 *         file_to cannot be creates or written - exit code 99.
 *         file_from or file_to cannot be closed - exit code 100.
 */
int main(int argc, char **argv)
{
	int from, to, numread, numwrite, c;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	from = open(argv[1], O_RDONLY);
	numread = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || numread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		numwrite = write(to, buff, numread);
		if (to == -1 || numwrite == -1)
		{
                	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		numwrite = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (numwrite > 0);

	free(buff);
	c = close(from);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	c = close(to);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fc %d\n", to);
		exit(100);
	}
	return(0);
}
