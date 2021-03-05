#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * string_nconcat - Function that concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * @n: numbers of bytes to asign from s2.
 *
 * Return: returning a pointer void.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, s1_len = 0, s2_len = 0, str_len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[s1_len]; i++)
		s1_len++;

	for (i = 0; s2[s2_len]; i++)
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	str = malloc(sizeof(char) * (s1_len + n + 1));
	if (str == NULL)
		return (NULL);

	for (s1_len = 0; s1[s1_len]; s1_len++)
		str[str_len++] = s1[s1_len];

	for (i = 0; i < n; i++)
		str[str_len++] = s2[i];

	str[str_len] = '\0';

	return (str);
}
