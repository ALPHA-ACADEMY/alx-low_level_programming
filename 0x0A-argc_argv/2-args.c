#include <stdio.h>

/**
 * main - program that print all argument it receives.
 * @argc: number of arguments.
 * @argv: argument array or vector.
 *
 * Return: always (0) On success.
*/

int main(int argc __attribute__((unused)), char **argv)
{
	while(*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
