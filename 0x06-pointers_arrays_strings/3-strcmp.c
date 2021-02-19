#include "holberton.h"
/**
 * _strcmp - This function compares two strings.
 * @s1: pointer to buffer point.
 * @s2: pointer to string point.
 *
 * Return: returning an int.
 */
int _strcmp(char *s1, char *s2)
{
	int i, comp;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
			comp = 0;
		else
		{
			comp = s1[i] - s2[i];
			break;
		}
	}
	return (comp);
}
