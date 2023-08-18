#include "main.h"
#include <unistd>

/**
 * _putchar - writes the character c.
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned.
*/


int _putchar(int c)
{
	return (write(1, &c, 1));
}
