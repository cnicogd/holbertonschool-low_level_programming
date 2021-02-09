#include "holberton.h"
/**
 * _islower  - Write a function that checks for lowercase character.
 *
 *@c: parameter to be passes troguht the function
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
