#include "main.h"

/**
* _strlen - function that returns the length of a string.
* @s : character.
*
* Return: the value of count.
*/

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}

	return (count);
}
