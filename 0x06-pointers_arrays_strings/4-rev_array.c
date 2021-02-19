#include "holberton.h"
/**
 * reverse_array - reverse all the numbers in the array from last to first
 * @a: array
 * @n: numbers to be entered in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
