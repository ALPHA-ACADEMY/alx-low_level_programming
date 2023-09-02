#include <stdio.h>

/**
 * _atoi - Converts a string into an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
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
 * main - program that multiplies two numbers.
 * @argc: agrument count.
 * @argv: array of arguemnts.
 * Return:  0 if it is 3 argument, return 1 if it is not.
*/

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}
