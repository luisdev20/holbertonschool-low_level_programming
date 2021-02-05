#include <stdio.h>
/**
 * main - This programm prints the digits 0 to 9
 * Return: returning 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 8; i++)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
	}
	putchar('0' + 9);

	return (0);
}
