#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: string to be scanned
 * @accept: string containing characters to matches.
 * Return: pointer to the bytes in s that match one bytes in accept.
*/

char *_strpbrk(char *s, char *accept)
{
	int index, j;

	for (index = 0; s[index] != '\0'; index++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[index] == accept[j])
				return (s + index);
	return ('\0');
}
