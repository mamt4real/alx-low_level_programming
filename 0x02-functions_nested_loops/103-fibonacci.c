#include "main.h"
#include<stdio.h>

/**
 * main - prints the sum of even fubbonaci
 * numbers whise value does not exceed 4,000,000
 * Return: 0 always
 */

int main(void)
{
	int a = 1, b = 2, sum, next;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			sum += b;
		next = a + b;
		a = b;
		b = next;
	}
	printf("%d\n", sum);

	return (0);
}
