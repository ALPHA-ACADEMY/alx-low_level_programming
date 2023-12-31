#include "main.h"
#include <stdlib.h>

/**
 * str_concat - funtion that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Null if it is empty string, or Null on failure.
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j = 0, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	concat = malloc(sizeof(char) * len);

	if (concat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		concat[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		concat[j++] = s2[i];

	return (concat);
}
