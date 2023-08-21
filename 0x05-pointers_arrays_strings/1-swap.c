#include "main.h"

/**
* swap_int - function that swaps the values of two integers.
* @a: The first integer to be swapped.
* @b: The second integer to be swapped.
*
* Return: Nothing because it is void.
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
