#include <unistd.h>
#include "holberton.h"
/**
 * _abs - This programm computes the absolute value of an integer.
 * @c: The entry to analize.
 *
 * Return: returning 0
 */
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}
