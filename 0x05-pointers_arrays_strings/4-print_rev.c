#include "holberton.h"
/**
 * print_rev - function that prints a string, in reverse
 *
 * @s: string to be printed
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, j, temp;

for (i = 0; s[i] != '\0'; i++)
{
	temp = i;
}
for (j = temp; s[j] !=  0; j--)
{
	_putchar(s[j]);
}
_putchar('\n');
}
