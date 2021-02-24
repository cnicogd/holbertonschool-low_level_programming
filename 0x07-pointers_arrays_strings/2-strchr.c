#include "holberton.h"

/**
 *_strchr - function that locates a character in a string.
 *@s: string
 *@c: char to be check
 *Return: locate the char
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return(s + i);
	}
	return (0);
}