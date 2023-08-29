#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: the prefix to be measured.
 *
 * Return: The number of bytes in s which
 *	consist only of bytes from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int number_bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s* == accept[i])
			{
				number_bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (number_bytes);
		}
		s++;:
	}
	return (number_bytes);
}
