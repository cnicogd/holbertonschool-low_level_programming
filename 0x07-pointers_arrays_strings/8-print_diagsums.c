#include <stdio.h>
#include "holberton.h"

/**
 *print_diagsums - function that prints the sum of the two diagonals.
 *@a: number to be add
 *@size: size of the matrix in diagonal
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int i, add1 = 0, add2 = 0;

	for (i = 0; i < size; i++)
	{
		add1 += a[(size + 1) * i];
		add2 += a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", add1, add2);
}
