#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: the length of a string.
*/

int _strlen_recursion(char *s)
{
		if (*s)
			return (0);
		return (_strlen_recursion(s + 1) + 1);
}
