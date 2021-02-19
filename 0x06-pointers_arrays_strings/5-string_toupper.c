#include "holberton.h"
/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: pointer returning a char.
 *
 * Return: returning a char.
 */
char *string_toupper(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
			s[j] -= 32;
	}
	return (s);
}
