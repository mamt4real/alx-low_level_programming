#include "main.h"

/**
* print_alphabet_x10 - prints alphabets in lower case
* 10 times each set per line
*/

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
