#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of argument or count.
 * @argv: array of argument.
 * Return: 0 on Success.
*/

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
