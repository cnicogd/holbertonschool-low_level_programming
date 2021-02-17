#include "holberton.h"
/**
 * puts_half - function that prints half of a string;
 *
 *@str: half string.
 */
void puts_half(char *str)
{
	int i = 0, string = 0;

	while (str[i++])
	{}
	for (string = i / 2; str[string] != '\0'; string++)
	{
		_putchar(str[string]);
	}
_putchar('\n');
}