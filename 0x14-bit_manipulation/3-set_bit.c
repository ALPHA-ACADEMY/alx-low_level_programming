#include "holberton.h"

/**
 * set_bit - function to set a bit at given indext to 1
 * @n: int pointer
 * @index: index at bit to change
 * Return: 1 if sucessful -1 if failed
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;


	if (n == 0 || index > sizeof(unsigned long int) * 8)
		return (-1);
	b = 1;
	b = 1 << index;
	*n = *n | b;

	return (1);
}
