#include "main.h"

/**
* rev_string - function that reverses a string.
* @s: string that we are gonna reverse.
* Return: nothing because it is void.
*/

void rev_string(char *s)
{
	int len = 0;
	int i;

	while (s[len])
		len++;
	
	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
