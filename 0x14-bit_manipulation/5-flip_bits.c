#include "main.h"

/**
 * flip_bits - function to count number of bits and flip
 * @n: number to be flipped
 * @m: number to be flipped to
 * Return: number of bits required
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xOR;
	unsigned long int bits = 0;

	for (xOR = n ^ m; xOR > 0; xOR >>= 1)
		bits += (xOR & 1);

	return (bits);
}
