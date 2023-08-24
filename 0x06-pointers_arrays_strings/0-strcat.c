#include "main.h"

/**
* *_strcat - function that concatenates two strings.
* @dest: string.
* @src : string also.
* Return: pointer char that point to the first element of a string.
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = 0;


	while (*dest++)
		dest_len++;

	for (i = 0; *src++ ; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
