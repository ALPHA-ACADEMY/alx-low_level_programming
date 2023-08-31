#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to be printe.*/

void _puts_recursion(char *s)
{
	if (!(*s))
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s++);
	}
}
