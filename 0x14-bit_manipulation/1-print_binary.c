#include "holberton.h"
/**
 * print_binary - integer to binary.
 * @n: number.
 * Return: binary.
 */
void print_binary(unsigned long int n)
{
if (n > 1)
{
	print_binary(n >> 1);
}
if (n & 1)
{
	_putchar('1');
}
else
{
	_putchar('0');
}

}
