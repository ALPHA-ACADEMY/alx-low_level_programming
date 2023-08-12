#include <stdio.h>

/**
 * main - write a program that prints all possible
 *	different combination of two digits.
 *
 * Return: always 0.
*/

int main(void)
{
	int i1, i2;

	for (i1 = 0; i1 <= 8; i1++)
		for (i2 = i1 + 1; i2 <= 9; i2++)
		{
			int digit1 = i1 + '0';
			int digit2 = i2 + '0';

			putchar(digit1);
			putchar(digit2);
			if (i1 < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');

	return (0);
}
