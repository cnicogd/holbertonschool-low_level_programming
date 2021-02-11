#include "holberton.h"
/**
 * print_line - Write a function that draws a straight line.\n'.
 *
 *@n:s the number of times the character _ should be printed
 * Return - Straight line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		_putchar('_');
	}
	_putchar('\n');
}
