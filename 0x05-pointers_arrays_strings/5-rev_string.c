#include "main.h"

/**
* rev_string - function that reverses a string.
* @s: string that we are gonna reverse.
* Return: nothing because it is void.
*/

void rev_string(char *s)
{
	int i = 0;
	int len = 0;
	int temp = 0;

	while (s[i++])
		++len;

	for (i = len - 1; i >= len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
