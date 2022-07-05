#include "main.h"

/**
 * main - prints the sum of multiples of 3
 * and 5 that are below 1024(excluded)
 * Return: 0 always
 */
int main(void)
{
	int i, sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printNum(sum);
	_putchar('\n');

	return (0);
}
