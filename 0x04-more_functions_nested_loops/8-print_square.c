#include "holberton.h"

/**
 * print_square - function that prints a square.
 * @size: returns the size of the square
 * Return: Always 0.
 */
void print_square(int size)
{
	int row, columns;

	if (size > 0)

		for (row = 0; row <= size; row++)
		{
			for (columns = 1; columns <= size; columns++)
			_putchar(35);
			_putchar('\n');
		}
	else
		_putchar('\n');
}
