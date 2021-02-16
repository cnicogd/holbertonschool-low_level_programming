#include "holberton.h"
/**
 * _puts - Write a function that prints a string, followed by a new line.
 *
 * @str: parameter to be printed
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
