#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2d array of integer.
 * @width: integer
 * @height: integer
 * Return: NULL of failure.
 *	if W or H is 0 return NULL.
*/

int **alloc_grid(int width, int height)
{
	int **_2D;
	int h, w;

	if (width <= 0 || height <= 0)
		return (NULL);

	_2D = malloc(sizeof(int *) * height);

	if (_2D == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		_2D[h] = malloc(sizeof(int) * width);

		if (_2D[h] == NULL)
		{
			for (; h >= 0; h--)
				free(_2D[h]);
			free(_2D);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
		for (w = 0; w < width; w++)
			_2D[h][w] = 0;
	return (_2D);
}
