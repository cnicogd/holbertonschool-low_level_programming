#include "holberton.h"
/**
 * _strlen_recursion - Returns the lenght
 * @s: string.
 *
 * Return: lenght
 */

int _strlen_recursion(char *s)
{

	if (*s)
	{
	return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
