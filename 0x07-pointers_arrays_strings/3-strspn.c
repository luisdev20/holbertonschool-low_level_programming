#include "holberton.h"
/**
 * _strchr - Function that gets the len_sgth of a prefix substring.
 * @s: pointer to a char.
 * @accept: constant byte.
 *
 * Return: returning a pointer to a char.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int sum;

	sum = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				sum ++;
				break;
			}
		}
	}
	return (sum + 1);
}
