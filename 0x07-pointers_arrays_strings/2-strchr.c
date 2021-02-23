#include "holberton.h"
#include <stdlib.h>
/**
 * _strchr - Function that fills memory with a constant byte.
 * @s: pointer to a char.
 * @c: constant byte.
 *
 * Return: returning a pointer to a char.
 */
char *_strchr(char *s, char c)
{
	int i, len;
	char *temp = s;

	len = 0;
	while (temp[len] != '\0')
		len++;

	for (i = 0; i <= len; i++)
	{
		if (temp[i] == c)
		{
			return (&temp[i]);
		}
	}
	return (NULL);
}
