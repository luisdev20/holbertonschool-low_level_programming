#include <stdio.h>
/**
 * main - This programm prints the reverse alphabet in lowercase.
 * Return: returning 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
