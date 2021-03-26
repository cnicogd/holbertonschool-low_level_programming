#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: integer.
 * @index: index is the index, starting from 0 of the bit.
 * Return: bits.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
	{
		return (-1);
	}

	bit <<= index;
	*n = *n | bit;

	return (1);

}
