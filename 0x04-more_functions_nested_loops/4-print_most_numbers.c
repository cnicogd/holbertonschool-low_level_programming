#include "holberton.h"
/**
 * print_most_numbers - Write a function that prints the numbers, except 2 & 4'\n'.
 *
 * Return - numbers
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 50 && c != 52)
		_putchar(c);
	}
	_putchar('\n');
}