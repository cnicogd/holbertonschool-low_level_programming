#include "holberton.h"
/**
 *  print_alphabet- print the alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c;

	c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
