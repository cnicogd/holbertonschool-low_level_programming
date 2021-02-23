#include "holberton.h"

/**
 *  set_string- function that sets the value of a pointer to a char.
 *@s: dereference the s value to * to give the TO value
 *@to: save the s value
 * Return: pointer to a char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
