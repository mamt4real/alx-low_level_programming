#include "main.h"
#include<stdlib.h>
#include<stddef.h>

/**
 * alloc_grid - creates a 2d int array
 * @width: no of cols
 * @height: no rows
 * Return: pointer to a 2d array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **arr;

	if (!width || !height)
		return (NULL);
	arr = calloc(height, sizeof(int *));
	if (!arr)
		return (NULL);
	while (height > 0)
	{
		arr[--height] = calloc(width, sizeof(int));
		if (arr[height] == NULL)
		{
			free(arr);
			return (NULL);
		}
	}
	return (arr);
}
