#include "holberton.h"
int palindrome(char *s, int len, int i);
int str_len(char *s);
/**
 * is_palindrome - Fx that returns 1 if a string is a palindrome and 0 if not.
 * @s: base string to analize
 *
 * Return: an int.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = str_len(s);

	if (!(*s))
		return (1);

	return (palindrome(s, len, i));
}

/**
 * palindrome - Fx that returns 1 if a string is a palindrome and 0 if not.
 * @s: string to be checked.
 * @len: len of s
 * @i: index
 *
 * Return: an int.
 */
int palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (palindrome(s, len, i + 1));

	return (0);

}

/**
 * str_len - Fx that returns the length of a string.
 * @s: string to be measured.
 *
 * Return: an int.
 */
int str_len(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += str_len(s + len);
	}

	return (len);
}
