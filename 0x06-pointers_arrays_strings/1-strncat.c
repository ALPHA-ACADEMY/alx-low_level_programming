#include "main.h"

/**
* _strncat - function that concatenates two strings,
* @dest: string
* @src: string
* @n: number of character that we take from src
* Return: pointer point to a array of a string.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int dest_len = 0

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n ; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
