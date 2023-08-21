#include "main.h"

/**
* print_rev - function that prints a string,
*	in reverse, followed by a new line.
* @s: pointer of a type char that point to first character of string.
* Return: void.
*/

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len])
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
