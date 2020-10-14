#include "holberton.h"

/**
 * _isdigit - checks for a digit.
 * @c: character to be reviewed
 * Return: 1 if digit ,  zero otherwise.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
