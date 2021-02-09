#include "holberton.h"
/**
 *_abs - Write a function that computes the absolute value of an integer.
 *
 *@n: parameter to be passes trought the function
 * Return:  n
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
	return (n);
}
