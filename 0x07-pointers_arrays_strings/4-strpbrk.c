#include "main.h"

/***/

char *_strpbrk(char *s, char *accept)
{
	int index, j;

	for (index = 0; s[index] != '\0'; index++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[index] == accept[j])
				return (s + index);
	return ('\0');
}
