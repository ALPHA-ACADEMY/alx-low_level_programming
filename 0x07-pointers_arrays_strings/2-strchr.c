#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: the string that we are gonna search.
 * @c: the character to be located.
 *
 * Return: if c is found - retuen a pointer to the first occurance.
 *	if c is not found - return NULL.
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] == c)
			return (s + i);
	return ('\0');
}
