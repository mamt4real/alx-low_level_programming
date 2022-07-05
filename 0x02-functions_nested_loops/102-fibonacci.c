#include "main.h"
#include<stdio.h>

/**
 * main - prints the first fifty fibbonaci numbers
 * Return: 0 always
 */

int main(void)
{
	long int a = 0, b = 1, sum;
	int i;

	for (i = 1; i <= 50; i++)
	{
		sum = a + b;
		if (i < 50)
			printf("%lu, ", sum);
		else
			printf("%lu\n", sum);
		a = b;
		b = sum;

	}
	return (0);
}
