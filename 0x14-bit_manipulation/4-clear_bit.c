#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: number of bits.
 * @index: index is the index, starting from 0 of the bit.
 * Return: 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if ((sizeof(unsigned long int) * 8) - 1 < index)
	{
		return (-1);
	}
	bit <<= index;
	*n &= ~bit;

	return (1);
}
