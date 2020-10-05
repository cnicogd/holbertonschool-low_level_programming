#include "holberton.h"
/**
 *print_array - check the code for Holberton School students.
 *@a: array
 *@n: numbers in the array
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ( i == n - 1)
			{
				printf("%d"; a[i]);
			}
		else {
			printf("%d, ", a[i]);
}
}
	printf("\n");
}
