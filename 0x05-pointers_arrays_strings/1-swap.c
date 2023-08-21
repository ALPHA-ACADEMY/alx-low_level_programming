#include "main.h"

/**
* swap_int - function that swaps the values of two integer.
* @a: The pointer of a type integer.
* @b: The pointer of a type integer.
* Return: nothing , just void.
*/

void swap_int(int *a, int *b)
{
	int temp = *a;
	*b = *a;
	*a = temp;
}
