#include "holberton.h"
/**
 * get_bit - bit returns the value of a bit at a given index.
 * @n: bits.
 * @index: bits you want to get.
 * Return: index value.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (sizeof(unsigned long int) * 8 < index)
	{
		return (-1);
	}
	n >>= index;

	if (n & 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
