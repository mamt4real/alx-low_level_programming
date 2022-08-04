#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * print_strings - print all the strs passed
 * @n: number of args
 * @sep: separator pointer
 */
void print_strings(const char *sep, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *s;

	va_start(args, n);
	while (i < n)
	{
		s = (char *)va_arg(args, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < (n - 1) && sep)
			printf("%s", sep);
		i++;
	}
	va_end(args);
	printf("\n");
}
