#include "holberton.h"

/**
 *print_rev_recursion - prints a string in reverse.
 *@s: the string to be printed inreverse
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
}