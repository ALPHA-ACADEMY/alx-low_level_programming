#include "main.h"

/**
 * positive_or_negative - function that test in a number is
 *	negative or positive or zero.
 * @i : integer that we are gonna test.
 * Return: nothing because it is a void function.
*/


void positive_or_negative(int i)
{
	(i > 0)	? printf("%d is positive\n",i) :
		(i < 0) ? printf("%d is negative\n",i) :
			printf("%d is zero\n",i);
}
