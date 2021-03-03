#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a new space in memory
 * @str:  string to be copied.
 *
 * Return:  Alwasy 0;
 */
char *_strdup(char *str)
{
	char *copy;
	int i, lenght = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		lenght++;
	}

	copy = (char *)malloc(sizeof(char) * (lenght + 1));

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}

	copy[lenght] = '\0';

	return (copy);
}
