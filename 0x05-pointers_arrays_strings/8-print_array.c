#include <stdio.h>
#include "holberton.h"
/**
 *print_array - prints n elements of an array of integers
 *
 * @a:array
 * @n: size of the array.
 */
void print_array(int *a, int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		if (i == n - 1)
		printf("%d", a[i]);
		else
		printf("%d ,", a[i]);
	}
	printf("\n");
}
