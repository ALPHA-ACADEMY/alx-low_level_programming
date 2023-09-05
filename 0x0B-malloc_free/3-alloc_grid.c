#include "main.h"
#include <stlib.h>

/**
 * function that returns a pointer to a 2d array of integer.
 * @width: integer
 * @height: integer
 * Return: NULL of failure.
 *	if W or H is 0 return NULL.
*/

int **alloc_grid(int width, int height)
{
	int **_2D;
	int H, W;

	if (width <= 0 || height <= 0)
		return (NULL);

	_2D = malloc(sizeof(int *) * height);

	if (_2D == NULL)
		return (NULL);

	for(H = 0; H < height; H++)
	{
		_2D[H] = malloc(sizeof(int) * width);

		if (_2D[H] == NULL)
		{
			for (; H >= 0; H++)
				free(_2D[H]);
			free(_2D);
			return (NULL)
		}
	}

	for (H = 0; H < height; H++)
		for (W = 0; W < width; W++)
			_2D[H][W] = 0;
	return (_2D);
}
