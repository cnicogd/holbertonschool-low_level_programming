#include <stdio.h>

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: variable to be measured
 *
 * Return: THe length of the variable(string).
 */
int _strlen_recursion(char *s)
{
int len = 0;

if (*s)
{
len++;
len += _strlen_recursion(s + 1);
}
return (len);
}
