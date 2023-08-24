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
	int i = 0, des_len = 0

	while (des[i++])
		des_len++;

	for (i = 0; src[i] && i < n ; i++)
		dest[des_len++] = src[i];

	return (dest);
}
