#include "holberton.h"

/**
 * print_triangle -function that prints a triangle .
 *
 *@size: the size of the triangle
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int i, j, k;
	/* number of spaces*/
	k = 1 * size - 1;
	if (size > 0)
		/*Outer loop to handle number of rows in this case size*/
		for (i = 0 ; i < size ; i++)
		{
			/*Inner loop to handle number spaces*/
			/*values changing acc. to requirement*/
			for (j = 0; j < k; j++)
				_putchar(' ');
			/*Decrementing k after each loop */
			k = k - 1;
			/*Inner loop to handle number of columns*/
			/*values changing acc. to outer loop*/
			for (j = 0; j <= i ; j++)
				_putchar(35);
			_putchar('\n');

		}
	else
		_putchar('\n');
}
