#include "main.h"

/**
 * _memcpy - Copies n bytes from the memory area pointed
 *	to by @src int that pointed to by @dest.
 * @dest: A pointer to the memory area.
 * @src: A pointer to The source.
 * @n: number of bytes to copy from src.
 *
 * Return: A pointer to the destination buffer @dest.
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptrDes = dest;
	char *ptrSrc = src;

	for (i = 0; i < n; i++)
		ptrDest[i] = ptrSrc[i];
	return (dest);
}
