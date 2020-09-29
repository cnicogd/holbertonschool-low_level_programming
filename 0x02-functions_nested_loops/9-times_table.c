#include "holberton.h"
/**
 * times_table - print a table from 0 to 9.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
	_putchar('0');
	for (j = 0; j <= 9; j++)
	{
	_putchar(',');
	_putchar(' ');
	n = i * j;
	if (n <= 9)
	_putchar(' ');
	else
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
	}
	_putchar('\n');
	}
}
