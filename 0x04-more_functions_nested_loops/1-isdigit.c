#include <unistd.h>
#include "holberton.h"
/**
 * _isdigit - This programm checks for digits.
 * @c: The digit to analize
 *
 * Return: returning 0 or 1
 */
int _isdigit(int c)
{
	if ((c >= 48 && c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
