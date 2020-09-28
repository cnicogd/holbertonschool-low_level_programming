#include "holberton.h"
/**
 * print_sign - check the code for Holberton  if it is positive negative or 0
 *@n: takes in a character
 * Return: 1 if its positive 0 if its zero
 * -1 if its negative.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
