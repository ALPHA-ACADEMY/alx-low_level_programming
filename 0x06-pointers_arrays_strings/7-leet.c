#include "main.h"

/**
* leet - function that encodes a string into 1337.
* @str: string to be encoded.
*
* Return: pointer that point to array of string.
*/

char *leet(char *str)
{
	int i = 0, j = 0;

	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (str[i] == leet[j] ||
			   str[i] - 32 == leet[j])
				str[i] = j + '0';
		}
		i++;
	}
	return (str);
}
