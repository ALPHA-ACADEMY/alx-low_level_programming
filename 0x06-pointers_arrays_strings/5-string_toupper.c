#include "main.h"

/**
* string_toupper - function that changes all lowercase letters
*	of a string to uppercase.
* @str: string to be uppercase.
* Return: pointer point to string.
*/

char *string_toupper(char *str)
{
	char *a = str;

	for (; *a; a++)
		if (*a >= 'a' && *a <= 'z')
			*a -= 32;

	return (str);
}
