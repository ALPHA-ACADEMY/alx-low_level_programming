#include "main.h"
#include "stdio.h"

/**
 * print_diagsums - funnction that print the sum of two diagonals
 *	of square matrix of integers.
 * @a: the matrix of integers.
 * @size: the size of the matrix.
*/

void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i);
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += *(a + i);
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
