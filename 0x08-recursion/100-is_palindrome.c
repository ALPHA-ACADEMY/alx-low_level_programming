#include "main.h"

/**
 * _strlen - function that return the length of a string.
 * @s: string
 *
 * Return: length of the string.*
*/

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * _check_palind - function that checks the character.
 * @s: string.
 * @len: length of the string.
 * @i: iterator
 *
 * Return: 1 if palindrom, 0 if is not.
*/

int _check_palind(char *s, int i, int len)
{

	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (_check_palind(s, i + 1, len - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string
 *
 * Return: 1 if it is, 0 if it's not.
*/

int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (_check_palind(s, 0, _strlen(s)));
}
