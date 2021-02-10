#include <stdio.h>
/**
 * main - This programm prints the first 50 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: void
 */
int main(void)
{
	int i;
	long t1 = 1;
	long t2 = 2;
	long next_term;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld", t1);
		next_term = t1 + t2;
		t1 = t2;
		t2 = next_term;

		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
