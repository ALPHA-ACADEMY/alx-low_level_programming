#include <stdio.h>

/**
 * main - program that prints the first 50 Fibonacci numbers with 1 and 2.
 *
 * Return: Always 1.
*/

int main(void)
{
	int i;
	unsigned long fib1 = 0, fib2 = 1, sum = 0;

	for (i = 0; i < 50; i++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
