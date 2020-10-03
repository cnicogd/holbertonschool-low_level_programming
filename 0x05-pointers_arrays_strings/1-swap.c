#include "holberton.h"
/**
 * swap_int - check the code for Holberton School students.
 *@a:swaps an int
 *@b:swaps an int
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
