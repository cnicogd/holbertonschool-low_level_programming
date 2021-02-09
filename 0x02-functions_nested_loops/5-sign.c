#include "holberton.h"
/**
 *print_sign - Write a function that prints the sign of a number.
 *
 *@n: parameter to be passes trought the function
 * Return:  0 (0), 1 (+), -1 (-)
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
