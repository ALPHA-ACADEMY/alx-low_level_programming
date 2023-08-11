#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse,
 *	followed by a new line.
 *
 * Return: Always 0.
*/

int main(void)
{
	int i;

	for (i = 9; i <= 0; i--)
	{
		int digit = i + '0';

		putchar(digit);
	}
	putchar('\n');

	return (0);
}
