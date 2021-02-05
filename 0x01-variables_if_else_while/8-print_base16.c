#include <stdio.h>
/**
 * main - This programm print all hexa base digits
 * Return: returning 0
 */
int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}

	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}

	putchar('\n');

	return (0);
}
