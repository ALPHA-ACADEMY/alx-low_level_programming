#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 *	without 2 and 4.
 * Return: nothing because it is void.
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar((i % 10) + '0');
	}
	_putchar('\n');
}
