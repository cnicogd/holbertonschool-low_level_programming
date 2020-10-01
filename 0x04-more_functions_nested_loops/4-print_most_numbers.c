#include "holberton.h"

/**
 * print_most_numbers  - from 0 to nine except 2 & 4.
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c == 50 || c == 52)
			continue;
		else
			_putchar(c);
	}
	_putchar('\n');
}
