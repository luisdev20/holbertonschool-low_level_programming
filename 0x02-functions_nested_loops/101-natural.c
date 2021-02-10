#include <stdio.h>
#include "holberton.h"
/**
 * main - This programm that sum the list of all the natural numbers below 1024
 * excluded that are multiples of 3 or 5
 *
 * Return: void
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	return (0);
}
