#include <stdio.h>
/**
 * main - This programm finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: returning 0
 */
int main(void)
{
	long t1 = 1;
	long t2 = 2;
	long next_term = 0;
	long sum_even = 2;

	while (next_term <= 4000000)
	{
		next_term = t1 + t2;
		t1 = t2;
		t2 = next_term;
		if (next_term % 2 == 0)
		{
			sum_even = sum_even + next_term;
		}
	}
	printf("%ld\n", sum_even);
	return (0);
}
