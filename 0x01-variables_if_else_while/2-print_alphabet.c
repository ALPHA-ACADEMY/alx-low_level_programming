#include <stdio.h>

/**
* main - Print the alphabet in lowercase using while and putchar.
*
* Return: Always 0.
*/

int main(void)
{
	char alph = 'a';

	while (alph < 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
