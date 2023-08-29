#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: the pointer the point to another pointer LOL.
 * @to: the cahracter that stor the positing of another string.
*/

void set_string(char **s, char *to)
{
	*s = *to;
}
