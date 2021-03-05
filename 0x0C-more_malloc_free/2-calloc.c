#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - function to allocate bytes
 * @nmemb: # of elements.
 * @size:  size of de array.
 *
 * Return: Always 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr1;
	char *ptr2;
	unsigned int i;

if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	ptr1 = malloc(size * nmemb);

	if (ptr1 == NULL)
		{
		return (NULL);
		}

ptr2 = ptr1;

for (i = 0; i < (size * nmemb); i++)
	{
	ptr2[i] = '\0';
	}

			return (ptr1);
}
