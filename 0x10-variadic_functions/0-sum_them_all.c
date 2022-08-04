#include "variadic_functions.h"
#include<stdarg.h>

/**
 * sum_them_all - sum all the ints passed
 * @n: number of args
 *
 * Return: sum of ints
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list args;

	if (!n)
		return (sum);
	va_start(args, n);
	while (i < n)
	{
		sum += (int)va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum);
}
