#include "main.h"

/**
* print_alphabet - prints alphabets in lower case
* 10 times each set per line
*/

void print_alphabet(void)
{
	char c;

	for (int i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
