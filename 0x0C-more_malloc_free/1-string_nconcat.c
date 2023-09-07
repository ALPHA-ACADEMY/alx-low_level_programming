#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenate two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: indicate the first bytes of s2.
 * Return: NULL if the function is failed
 *	if not return a pointer to first element in the string.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*s1)
	{
		len++;
		s1++;
	}
	len = 0;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	for (i = 0; *(s1 + i); i++)
		*(concat + len++) = *(s1 + i);

	for (i = 0; *(s2 + i) && i < n; i++)
		*(concat + len++) = *(s2 + i);

	*(concat + len) = '\0';

	return (concat);

}
