#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size:  size of the array
 * @c: char to be malloc
 *
 * Return: always 0
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
