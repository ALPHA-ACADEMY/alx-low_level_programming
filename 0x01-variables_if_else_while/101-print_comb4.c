#include <stdio.h>

/**
 * main - Program that prints all possible different
 *	combinations of three digits
 *
 * Return: Always 0.
*/

int main(void)
{
	int i1, i2, i3;

	for (i1 = 0; i1 <= 7; i1++)
		for (i2 = i1 + 1; i2 <= 8; i2++)
			for (i3 = i2 + 1; i3 <= 9; i3++)
			{
				int digit1 = i1 + '0';
				int digit2 = i2 + '0';
				int digit3 = i3 + '0';

				putchar(digit1);
				putchar(digit2);
				putchar(digit3);
				if (i1 < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar('\n');
	return (0);
}
