#include <stdio.h>

/**
* main - Write a program that prints the alphabet in lowercase,
*	and then in uppercase, followed by a new line.
*
* Return: Always 0.
*/

int main(void)
{
	char lowercase, appercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
		putchar(lowercase);
	for (appercase = 'A'; appercase <= 'Z'; appercase++)
		putchar(appercase);
	putchar('\n');

	return (0);
}
