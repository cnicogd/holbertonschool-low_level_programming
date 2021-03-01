#include "holberton.h"

/**
 *_strchr - function that locates a character in a string.
 *@s: string
 *@c: char to be check
 *Return: locate the char
 */
char *_strchr(char *s, char c)
{
	int i;

	while (s[i])
	{
		if (s[i] == c)
			return (s + i);
		if (s[i + i] == c)
			return (s + i + 1);
		i++;
	}
	return (0);
}
