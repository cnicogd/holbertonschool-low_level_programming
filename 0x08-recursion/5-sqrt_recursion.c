#include "holberton.h"
/**
 * _raiz - function that returns the natural square root of a number
 *@base: gives the number to be checked on the root
 *@root: number of the root
 *Return: sqr root of the base number
 */
int _raiz(int base, int root)
{
if (base == root * root)
{
return (root);
}
else if (base < root * root)
{
return (-1);
}
return (_raiz(base, root + 1));
}
/**
* _sqrt_recursion - Print my number for sqrt.
* @n: for search her sqrt.
* Return: The number.
*/
int _sqrt_recursion(int n)
{
return (_raiz(n, 1));
}
