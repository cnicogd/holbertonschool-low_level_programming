#include "holberton.h"
/**
 *  _abs - check the code for Holberton and produce the absolute
 * value of a number
 *@n: takes in a character
 * Return: 1 if its positive 0 if its zero
 * -1 if its negative.
 */
int _abs(int n)
{
	if (n < 0)
	{
	return (n * -1);
	}
	return (n);
	}
