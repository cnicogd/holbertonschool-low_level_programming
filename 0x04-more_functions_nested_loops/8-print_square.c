#include "holberton.h"
/**
 * print_square- Write a function that prints a square, followed by a new line..
 *
 *@size:the number of times the character # should be printed
 * Return - Straight line
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for(j = 0; j < size; j++)
		{
		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		_putchar('#');
		}
		_putchar('\n');
	}
}
