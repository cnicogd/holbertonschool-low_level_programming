#include "holberton.h"
/**
 * print_square- Write a function that prints a square, followed by a new line.
 *
 *@size:the number of times the character # should be printed
 * Return - Straight line
 */
void print_square(int size)
{
	int i, j;

if (size > 0)
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		_putchar(35);
		_putchar('\n');
	}
	else
	_putchar('\n');
}
