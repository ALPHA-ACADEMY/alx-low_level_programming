#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space
 *	in memory, which containes a copy of a string given.
 * @str: string given.
 * Return: Null if str is NULL, On success retrun a pointer.
*/

char *_strdup(char *str)
{
	unsigned int len = 0, i;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (*str++)
		len++;

	copy = (char *)malloc((len + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		copy[i] = str[i];
	copy[len] = '\0';

	return (copy);

}
