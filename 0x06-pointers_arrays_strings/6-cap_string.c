#include "holberton.h"
/**
 * cap_string - Function that capitalizes all words of a string.
 * @str: pointer from char.
 *
 * Return: returning a char.
 */
char *cap_string(char *str)
{
	int len, j, k;
	int forb[13] = {32, '\t', '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	len = 0;
	while (str[len] != '\0')
		len++;

	for (j = 0; j < len; j++)
	{

		for (k = 0; k < 13; k++)
		{
			if (str[j] == forb[k])
			{
				if (str[j + 1] >= 97 && str[j + 1] <= 122)
					str[j + 1] -= 32;
			}
		}
	}
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;

	return (str);
}
