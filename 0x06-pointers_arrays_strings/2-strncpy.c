#include "main.h"

/**
* _strncpy - function that copies a string.
* @dest: the string
* @src: the string
* @n: the number of bytes from src to be appended to des.
*
* Return: A pinter to the resulting string dest.
**/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
