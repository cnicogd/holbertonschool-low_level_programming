#include "holberton.h"
/**
 *print_alphabet_x10  - this functions prints the alphabet on a loop 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int c;
	char d;

	c = 0;

	while (c <= 9)
	{
		d = 97;

		while (d <= 122)
		{
			_putchar(d);
			d++;
		}
		c++;
		_putchar('\n');
	}
}
