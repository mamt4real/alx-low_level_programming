#include "main.h"
#include<stdio.h>

/**
 * print_diagsums - prints sum of diagonals
 * @a: A 2D array representing the matrix
 * @n: size of the square matrix
 */
void print_diagsums(int *a, int n)
{
	int i, j, lead = 0, rev = 0;

	for (i = 0, j = 0; i < n * n; i += n, j++)
	{
		lead += *(a + j + i);
		rev += *(a + i - j - 1 + n);
	}
	printf("%d, %d\n", lead, rev);
}
