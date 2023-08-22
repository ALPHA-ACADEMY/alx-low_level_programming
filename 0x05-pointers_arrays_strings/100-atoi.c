#include "main.h"

/**
* _atoi - function that convert a string to an integer.
* @s: pointer that points to the first element of the string.
* Return: integer.
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*str == '-')
			sign *= -1;

		else if (*str >= '0' && *str <= '9')
			num = (num * 10) + (*str - '0');

		else if (num > 0)
			break;

	} while (*str++);

	return (num * sign);
}
