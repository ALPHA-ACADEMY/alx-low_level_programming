#include "main.h"

/**
 * factorial - returns the factorials of a number using recursion
 * @n: number that we want to calculate.
 * Return: factorial of n.
*/

int factorial(int n)
{
	(n == 0) ?
		return (1) :
		(n < 0) ? return (-1) :
		return (n * factorial(n - 1));
}
