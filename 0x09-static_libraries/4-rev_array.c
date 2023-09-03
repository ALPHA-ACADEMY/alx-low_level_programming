#include "main.h"

/**
* reverse_array - function that reverses the content of an array of integers.
* @a : array of type integer.
* @n : the number of element of the array.
* return : void.
*/

void reverse_array(int *a, int n)
{
	int tmp = 0, i;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
