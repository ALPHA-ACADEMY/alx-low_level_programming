#include "main.h"

/**
 * main - prints the name ofthe programe.exe.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0.
*/

int main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = 0;

	while (argv[0][i])
	{
		_putchar(argv[0][i++]);
	}
}
