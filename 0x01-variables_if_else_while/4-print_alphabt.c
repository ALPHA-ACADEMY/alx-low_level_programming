#include <stdio.h>

/**
* main - Prints all alphabet whithout leters q and e.
*
* Return: Always 0.
*/

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'a' && l == 'e')
			continue;
		else
			putchar(l);
	}
	putchar('\n');

	return (0);
}
