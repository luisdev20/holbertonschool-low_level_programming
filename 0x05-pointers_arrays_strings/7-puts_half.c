#include "holberton.h"
/**
 * puts_half - This function print the second half of the string.
 * starting with the first character, followed by a new line.
 * @str: The string to analize.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int c;
	int len;

	while (str[c] != '\0')
		c++;

	len = c;

	if (len % 2 == 0)
	{
		for (i = len / 2; i <= len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (len - 1) / 2; i <= len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
