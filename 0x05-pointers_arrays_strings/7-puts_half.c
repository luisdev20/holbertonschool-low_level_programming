#include "holberton.h"
/**
 * puts_half - This function print the second half of the string.
 * @str: The string to analize.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int c = 0;
	int len, par, impar;

	while (str[c] != '\0')
		c++;

	len = c;
	par = len / 2;
	impar = (len - 1) / 2;

	if (len % 2 == 0)
	{
		for (i = len - par; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = len - impar; i < len; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
