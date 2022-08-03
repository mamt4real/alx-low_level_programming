#include "function_pointers.h"

/**
 * array_iterator - visit each element of an array and executea action.
 * @array: pointer to array
 * @size: length of array
 * @action: funxtion to call an elems
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	while (size > 0)
		action(array[--size]);
}
