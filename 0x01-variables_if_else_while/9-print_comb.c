#include <stdio.h>

/**
 * main - a program that prints all possible combinations
 *	of single-digit numbers.
 *
 * Return: Always 0.
*/

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int digit = i + '0';

		putchar(digit);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
