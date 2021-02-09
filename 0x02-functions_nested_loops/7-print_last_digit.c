#include "holberton.h"
/**
 *print_last_digit - Write a function that prints the last digit of a number.
 *
 *@n: parameter to be passes trought the function
 * Return:  n
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = -last;
		_putchar (last + 48);
	}
	else
	{
		_putchar (last + 48);
	}
	return (last);
}
