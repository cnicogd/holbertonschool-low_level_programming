#include "holberton.h"
/**
 * _isalpha - check the code for Holberton  if it is a lowercase character.
 *@c: takes in a character
 * Return: 1 if its true 0 its not.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
