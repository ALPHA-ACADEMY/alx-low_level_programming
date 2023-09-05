#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of you program.
 * @ac: The number of argument.
 * @av: array of arguments.
 * Return: if ac = 0, av = null, or the function fails return Null.
 *	otherwise - return a pointer to the new string.
*/

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i = 0, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac ; arg++)
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];

		str[i++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
