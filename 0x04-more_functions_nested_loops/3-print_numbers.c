#include "holberton.h"

/**
 * print_numbers  - from 0 to nine.
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		_putchar(c);
	_putchar('\n');
}
