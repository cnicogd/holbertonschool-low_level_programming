#include "holberton.h"
/**
 *_isalpha - Write a function that checks for qlphqbetic character.
 *
 *@c: parameter to be passes trought the function
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	return (1);
	else
	return (0);
}
