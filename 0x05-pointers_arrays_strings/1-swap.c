#include "holberton.h"

/**
 * swap_int - Write a function that swaps the values of two integers..
 *
 * @a:int 1
 * @b: int 2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a =  *b;
	*b = temp;

}
