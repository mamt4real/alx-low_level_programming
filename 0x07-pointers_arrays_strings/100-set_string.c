#include "main.h"

/**
 * set_string - set the value of a pointer to another string
 * @s: the pointer to set
 * @to: the pointer to set s to
 */
void set_string(char **s, char *to)
{
	*(s) = to;
}
