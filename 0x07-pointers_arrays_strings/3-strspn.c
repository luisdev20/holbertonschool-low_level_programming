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
	int len_s, len_accept, i, j;
	unsigned int sum;

	sum = 0, len_s = 0, len_accept = 0;
	while (s[len_s] != '\0')
	{
		len_s++;
	}
	while (accept[len_accept] != '\0')
	{
		len_accept++;
	}

	for (i = 0; i <= len_accept; i++)
	{
		for (j = 0; j <= len_s; j++)
		{
			if (accept[i] == s[j])
			{
				sum++;
				break;
			}
		}
	}
	return (sum);
}
