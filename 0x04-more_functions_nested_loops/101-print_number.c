#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: number that we are gonna print just using _putchar.
 *
 * Return: nothing.
*/

void print_number(int n)
{
	int count_digit = 1;
	int temp = n;
	int s = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (temp / 10 != 0)
	{
		temp /= 10;
		count_digit++;
		s *= 10;
	}

	while (count_digit > 0)
	{
		_putchar((n / s) + '0');
		n = n % s;
		s /= 10;
		count_digit--;
	}
}

