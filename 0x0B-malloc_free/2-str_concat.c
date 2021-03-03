#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * str_concat - Returns a function that concatenates two strings.
 * @s1: pointer to a string 1.
 * @s2: pointer to a string 2.
 *
 * Return: returning a pointer to a char.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, len_max = 0, concat_i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len_max++;

	concat = malloc((len_max) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[concat_i++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[concat_i++] = s2[i];

	concat[concat_i] = '\0';

	return (concat);
}
