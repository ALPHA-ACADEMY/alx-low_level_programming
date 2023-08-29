#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: the string to be searched.
 * @needle: the substring to be located.
 *
 * Return: if the substring is located return pointer to the beginning of it,
 *	if the substring is not located - null
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	for (i = 0; *haystack; haystack++)
	{
		if (haystack[i] == needle[i])
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
	}

	return ('\0');
}
