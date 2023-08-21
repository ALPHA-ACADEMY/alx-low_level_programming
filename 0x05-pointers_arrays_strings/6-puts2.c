#include "main.h"

/**
* puts2 - function that print the first character,
* avoid the second and so so.
* @str: string that we cut in half
* Return: Nothing
*/

void puts2(char *str)
{
	int i=-1;

	while (str[++i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
