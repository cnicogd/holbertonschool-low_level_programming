#include "holberton.h"
/**
 * binary_to_uint - binary to unsigned integer.
 * @b: binary number.
 * Return: integer.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int binario = 0;

while (b && *b)
{
	if (*b != '0' && *b != '1')
	{
		return (0);
	}

		binario = binario << 1;
		binario = binario | (*b - '0');
		b++;
}
return (binario);
}
