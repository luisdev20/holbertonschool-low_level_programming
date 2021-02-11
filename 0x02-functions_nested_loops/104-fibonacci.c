#include <stdio.h>
/**
 * main - This programm prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 *
 * Return: void
 */
int main(void)
{
	int i;
	unsigned long t1 = 1;
	unsigned long t2 = 2;
	unsigned long next_term;

	for (i = 1; i < 93; i++)
	{
		printf("%lu, ", t1);
		next_term = t1 + t2;
		t1 = t2;
		t2 = next_term;
	}
	printf("19740274219868223167, 31940434634990099905, 51680708854858323072");
	printf("83621143489848422977, 135301852344706746049");
	printf("\n");
	return (0);
}
