#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * @c : The caracter to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise.
*/

int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
