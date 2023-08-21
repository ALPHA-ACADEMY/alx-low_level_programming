#include "main.h"

/**
* _puts - function that prints a string,
*	followed by a new line.
* @str: string that we are gonna print + new line.
*
* return: Void.
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(*str);
}
