#include "main.h"

/**
 * reverse_array - reverses an array in place
 * @a: pointer to the array
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int tmp = 0, i = 0, l = n - 1;

	/* reverse the array */
	while (l > i)
	{
		tmp = *(a + i);
		*(a + i) = *(a + l);
		*(a + l) = tmp;
		i++;
		l--;
	}
}
