#include <stdio.h>

/**
 * main - program that print all argument it receives.
 * @argc: number of arguments.
 * @argv: argument array or vector.
 *
 * Return: always (0) On success.
*/

int main(int argc, char **argv)
{
	(void)argc;

	while (*argv)
		printf("%s\n", *argv++);

	return (0);
}
