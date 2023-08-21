#include "main.h"

/**
* print_array - function that prints n elements of an array of integers,
*	followed by a new line.
* @a: pointer that point to first element of array.
* @n: the number of element of the array.
* Return: nothing at all.
*/

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index < n - 1)
			printf(" ,");
	}
	_putchar('\n');
}
