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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
