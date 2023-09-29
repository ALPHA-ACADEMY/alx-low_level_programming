#include "main.h"

/**
 * get_endianness - function that checks endianness
 * @void: void
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *c = (char *) &num;

	return ((int) *c);
}
