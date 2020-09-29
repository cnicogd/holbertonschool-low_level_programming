#include "holberton.h"
/**
 *  print_last_digit - check the code for Holberton and print the last
 * digit of a number
 *@n: takes in a character
 * Return:the last digit of a number.
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + 48);
	return (n);
}
