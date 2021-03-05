#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - check malloc memory.
 * @b: # of bytes.
 *
 * Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
