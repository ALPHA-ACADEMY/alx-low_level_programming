#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: indicate the size of the triangle.
 *
 * Return: nothing because it is Void.
*/

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
		for (i = 0; i < size; i++)
		{
			for (j = i + 1; j < size; j++)
				_putchar(' ');
			for (j = 0; j <= i; j++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
