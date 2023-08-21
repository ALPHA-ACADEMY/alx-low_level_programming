#include "main.h"

/**
* puts_half - function that prints half of a string,
*	followed by a new line.
* @str : char that point to a string.
* Return: Void , nothing at all.
*/

void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (str[i++])
		++len;

	for (i = len / 2; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
