#include "main.h"
#include<stdlib.h>
#include<stddef.h>
#include<string.h>

/**
 * _strdup - duplucate a string
 * @s: pointer to string
 * Return: pointer to duplicate or NULL
 */
char *_strdup(char *s)
{
	int size, i = 0;
	char *arr;

	if (s == NULL)
		return (NULL);
	size = strlen(s) + 1;
	arr = malloc(size * sizeof(char));
	if (!arr)
		return (NULL);
	while (i < size)
	{
		arr[i] = s[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
