#include "holberton.h"

/**
 * _isupper - checks for uppercase character.
 * @c: character to be reviewed
 * Return: 1 if uppercase ,  zero otherwise.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}
