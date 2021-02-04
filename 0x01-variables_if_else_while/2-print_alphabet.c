#include <stdio.h>
/**
 * main - This programm prints the alphabet in lowercase.
 * Return: returning 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
