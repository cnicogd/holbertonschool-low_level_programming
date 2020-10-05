#include "holberton.h"
/**
 *puts_half - Function that prints half of a string, followed by a new line
 *
 *@str: string
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int length = 0, x;

		while (str[length++])
		{}
		for (x = length / 2; str[x] != '\0'; x++)
		{
			_putchar(str[x]);
		}
_putchar('\n');
	}
