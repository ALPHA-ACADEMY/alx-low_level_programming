#include "main.h"

/**
* *_strcpy - function that copies the string pointed to by src,
* including the termination null byte(\0), to the buffer pointed to by dest.
*
* @dest: char pointed to string.
* @src:	char pointed to string.
*
* Return: address of first element of a string.
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (src[i++])
		len++;

	for (i = 0; i < len; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
