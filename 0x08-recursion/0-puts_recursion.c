#include "holberton.h"
/**
 * _puts_recursion - puts function in recursion.
 *
 *@s: string
 *Return: (*s) if s != '\0'
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
