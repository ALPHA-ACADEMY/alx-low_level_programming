include "main.h"

/**
* *_strcat - function that concatenates two strings.
* @dest: string.
* @src : string also.
* Return: pointer char that point to the first element of a string.
*/

char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int len_src = 0;
	int i_dest, j_dest;

	while (*dest++)
		len_dest++; /* 6 */
	while (*src++)
		len_src++; /* 7 */

	for (i_dest = len_dest, j_src = 0; j_src < len_src; j_src++, i_dest++)
		dest[i_dest] = src[j_src];

	dest[i_dest] = '\0';

	return (dest);
}
