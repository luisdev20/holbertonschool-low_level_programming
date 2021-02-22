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
	char *temp = s;

	for (i = 0; temp[i] != '\0'; i++)
	{
		if (temp[i] == c)
		{
			return (&temp[i]);
		}
	}
	return (NULL);
}
