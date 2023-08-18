#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: number that we are gonna print just using _putchar.
 *
 * Return: nothing.
*/

void print_number(int n)
{
	int count_digit;
	int temp = n;
	int i;
	int s = 1;

	while (temp != 0)
	{
		temp /= 10;
		count_digit++;
	}

	for (i = 1; i < count_digit; i++)
		s *= 10;

	if (n != 0)
		while (n != 0)
		{
			if (n < 0)
			{
				n *= -1;
				_putchar('-');
			}
			_putchar((n / s) + '0');
			n = n % s;
			s = s / 10;
		}
	else
		_putchar('0');
}
