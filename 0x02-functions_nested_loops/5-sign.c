#include "main.h"

/**
 * print_sign - function that prints the sign of a number.
 * @n: the integer te be checked.
 *
 * Return: 1 if n is greather than zero,
 *	0 if n is zero,
 *	-1 if n less than zero.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
