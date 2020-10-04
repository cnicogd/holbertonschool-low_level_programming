#include "holberton.h"
/**
 * _strlen -function that returns the length of a string.
 *@s: loop for a string
 *
 *Return: string lenght
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{}      
	return (i);
}
