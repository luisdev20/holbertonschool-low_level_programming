#include <stdlib.h>
#include "holberton.h"
/**
 * _strchr - Function that fills memory with a constant byte.
 * @s: pointer to a char.
 * @c: constant byte.
 *
 * Return: returning a pointer to a char.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
