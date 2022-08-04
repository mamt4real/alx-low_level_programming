#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * print_numbers - print all the ints passed
 * @n: number of args
 * @sep: separator pointer
 *
 * Return: sum of ints
 */
void print_numbers(const char *sep, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", (int)va_arg(args, int));
		if (i < (n - 1) && sep)
			printf("%s", sep);
		i++;
	}
	va_end(args);
	printf("\n");
}
