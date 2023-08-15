#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character.
 * @c: the character to be checked.
 *
 * Return: 1 if c is a letter LOWER or UPPER, 0 otherwise
*/

int _isalpha(char c)
{
	if (c < 'a' && c < 'A' && c > 'z' && c > 'Z')
		return (1);
	else
		return (0);
}
