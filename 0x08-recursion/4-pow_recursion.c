#include "holberton.h"

/**
 * _pow_recursion - function that returns the value of x°y
 * @x: number to be raised
 * @y: the power.
 * Return: the power of x
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
{
	return (-1);
}
if (y == 0)
{
return (1);
}
return (x = x * _pow_recursion(x, y - 1));
}
