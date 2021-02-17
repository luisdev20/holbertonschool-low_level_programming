#include "holberton.h"
/**
 * puts2 - This programm that prints every other character of a string.
 * starting with the first character, followed by a new line.
 * @str: The string to analize.
 *
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
		i++;

	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
	}
	_putchar('\n');
}
