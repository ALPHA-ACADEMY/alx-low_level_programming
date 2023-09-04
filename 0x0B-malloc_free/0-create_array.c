#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and
 *	initializes it with a specific char.
 * @size: The size og the array;
 * @c: The character to intialize.
 * Return: if size == 0 or the function failed - null.
 *	otherwise - a pointer to the array.
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);


	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
