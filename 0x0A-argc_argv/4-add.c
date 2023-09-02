#include <stdio.h>

/**
 * _atoi - funciton that convert a string into an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of th converted string.
*/


int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}



/**
 * main - program that adds postive numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: integer sum.
*/

int main(int argc, char **argv)
{
	int i, digit, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += _atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
