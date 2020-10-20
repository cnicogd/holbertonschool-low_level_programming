#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void _print_diagsums(int *a, int size)
{
int i, add1 = 0, add2 = 0;

for (i = 0; i < size; i++)
{
add1 += a[(size + 1) * i];
add2 += a[(size - 1) * (i + 1)];
}
printf("%d, %d\n", add1 , add2);
}