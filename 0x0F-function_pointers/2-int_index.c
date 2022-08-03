#include "function_pointers.h"

/**
 * int_index - searxh index of an elem
 * @array: haystack
 * @size: lenfth of haystack
 * @cmp: search funxtion
 * Return: index of needle or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	i = 0;
	while (i < size)
		if (cmp(array[i++]))
			return (i - 1);
	return (-1);
}
