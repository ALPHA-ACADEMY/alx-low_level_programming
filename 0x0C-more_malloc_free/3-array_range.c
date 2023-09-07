#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min : integer
 * @max : integer
 * Return: a pointer to array.
 *	if min > max return NULL.
 *	if malloc fails return NULL.
*/

int *array_range(int min, int max)
{
	int n, i;
	int *arr;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	arr = malloc(sizeof(int) * n);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		arr[i] = min++;

	return (arr);

}
