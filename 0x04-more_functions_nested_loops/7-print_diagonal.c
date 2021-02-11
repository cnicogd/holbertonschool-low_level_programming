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

if (n > 0)
	for (i = 0 ; i < n ; i++)
	{

		{
			for (j = 0; j < i ; j++)
			_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
else
	_putchar('\n');
}
