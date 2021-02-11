#include <unistd.h>
#include "holberton.h"
/**
 * _isupper - This programm checks for uppercase character.
 * @c: The character to analize
 *
 * Return: returning 0 or 1
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
