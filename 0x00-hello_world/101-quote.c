#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Description: print a quote using the write function
 *
 * Return: 1 (error)
*/

int main(void)
{
	char st[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, st, 59);

	return (1);
}
