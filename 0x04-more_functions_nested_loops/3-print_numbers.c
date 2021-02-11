#include "holberton.h"
/**
 * print_numbers - Write a function that prints the numbers, from 0 to 9, '\n'.
 *
 * Return - numbers
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
