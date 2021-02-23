#include "holberton.h"
/**
 * _strspn - Function that gets the len_sgth of a prefix substring.
 * @s: pointer to a char.
 * @accept: constant byte.
 *
 * Return: returning a pointer to a char.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
			j++;
		}
		if (!*(accept + j))
		{
			return (i);
		}
		i++;
	}
	return (i);
}
