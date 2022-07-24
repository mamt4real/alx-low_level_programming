#include "main.h"
#include<stdlib.h>
#include<stddef.h>
#include<string.h>

/**
 * strtow - split a string
 * @str: string to split
 * Return: pointer to new or NULL
 */
char **strtow(char *str)
{
	int k, j, i = 0, size = 0;
	char **arr, *tmp;

	if (str == NULL || !(*str))
		return (NULL);
	arr = malloc(sizeof(char *));
	for (i = 0; str[i]; i++)
	{
		/* skip spaces */
		if (str[i] == ' ')
			continue;
		/* get the word length */
		j = 0;
		while (str[j + i] != ' ' && str[j + i])
			j++;
		/* create pointers */
		arr = realloc(arr, (size + 1) * sizeof(char *));
		tmp = malloc(j * sizeof(char));
		if (!arr || !tmp)
			return (NULL);
		/* copy word */
		for (k = 0; k < j; k++)
			tmp[k] = str[i + k];
		tmp[k] = '\0';
		arr[size++] = tmp;

		/* jump the word */
		i += j;
		if (!str[i])
			break;
	}
	if (!size)
		return (NULL);
	arr[size] = NULL;
	free(tmp);
	return (arr);
}
