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
	int i = 0, size = strlen(s) + 1;
	char *arr;

	if (!s)
		return (NULL);
	arr = malloc(size * sizeof(char));
	while (i < size)
	{
		arr[i] = s[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
