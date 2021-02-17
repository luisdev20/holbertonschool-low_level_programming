#include "holberton.h"
/**
 * rev_string - This programm that reverses a string.
 * @s: The string to reverse.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int c;
	int i = 0;
	char *back;
	char *end;
	char temp;

	while (s[i] != '\0')
		i++;

	back = s;
	end = s;

	for (c = 0; c < i - 1; c++)
		end++;

	for (c = 0; c < i / 2; c++)
	{
		temp = *end;
		*end = *back;
		*back = temp;

		back++;
		end--;
	}
}
