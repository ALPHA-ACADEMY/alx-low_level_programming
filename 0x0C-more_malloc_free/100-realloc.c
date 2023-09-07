#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a mempry block using malloc and free.
 * @ptr: a pointer to old memory.
 * @old_size: number of bytes in a old memory.
 * @new_size: number of bytes in a new memory.
 *
 * Return: if new_size > old_size return ptr.
 *	if new_size == 0 and ptr is not null  --> return NULL.
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int i;
	char *tmp, *fill;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		arr = malloc(new_size);
		if (arr == NULL)
			return (NULL);
		return (arr);
	}

	tmp = ptr;
	arr = malloc(sizeof(*tmp) * new_size);

	if (arr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	fill = arr;

	for (i = 0; i < old_size && i < new_size; i++)
		fill[i] = *tmp++;

	free(ptr);
	return (arr);
}
