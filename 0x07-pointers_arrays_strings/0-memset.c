#include "main.h"

/**
 * _memset - function that fils memory with a constant byte.
 * @s: pointer to the momory area to be filled.
 * @b: The character to the memory area to be filled.
 * @n: The number of bytes to be filled.
 *
 * Return: pointer that point to a string.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *buffer = s;

	for (i = 0; i < n; i++)
		buffer[i] = b;
	return (buffer);
}
