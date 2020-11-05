#include "holberton.h"
/**
 *print_rev - print a string in reverse
 *@s: pointer to be copied
 */
void print_rev(char *s)
{
	int length, n;

	for (length = 0; s[length] != '\0'; length++)
	{}
		for (n = length; n >= 0; n--)
		{
			if (s[n] != '\0')

				_putchar(s[n]);
		}

	_putchar('\n');
}
