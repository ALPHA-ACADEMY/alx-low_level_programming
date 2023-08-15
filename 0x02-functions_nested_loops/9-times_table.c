# include "main.h"

/**
 * times_table - function that print the 9 times table, starting with 0.
 *
 * Return: nothing becuase it is just Void (-_-)
*/

void times_table(void)
{
	int i, j, prod;
	for (i = 0; i < 10 ; i++)
	{
		_putchar('0');

		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			prod = j * i;

			if (prod <= 9)
				_putchar(' ');
			else 
				_putchar((pro / 10) + '0');
			
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
