#include "holberton.h"
/**
 * print_diagonal- Write a function that draws a diagonal line .\n'.
 *
 * @n: is the number of times the character \ should be printed
 * Return - diagonal
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (n <= 0)
			{
				_putchar('\n');
			}
			else if (i > j)
			{
				_putchar(' ');
			}
			else if (j == i)
			{
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
}
