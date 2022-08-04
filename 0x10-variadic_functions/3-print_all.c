#include "variadic_functions.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * print_all - print all the args passed
 * @format: argument types
 * Description:
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil)
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", (int)va_arg(args, int));
				break;
			case 'c':
				printf("%c", (char)va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
				print_str((char *)va_arg(args, char *));
				break;
			default:
				break;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
/**
 * print_str - prints a str
 * @s: pointer to str
 */
void print_str(char *s)
{
	if (s)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
