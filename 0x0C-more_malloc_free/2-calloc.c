#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: integer.
 * @size: in bytes.
 * Return: NULL if nmemb or size === 0,
 *	if malloc fails it returnes NULL.
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *fill;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);

	fill = array;

	for (i = 0; i < (size * nmemb); i++)
		fill[i] = '\0';

	return (array);
}
