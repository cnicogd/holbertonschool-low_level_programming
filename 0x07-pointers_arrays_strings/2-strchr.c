#include "holberton.h"

/**
 *_strchr - function that locates a character in a string.
 *@s: string
 *@c: char to be check
 *Return: locate the char
 */
char *_strchr(char *s, char c)
{
	int cont = 0;

while (cont != '\0')
{
if (s[cont] == c)
return (&s[cont]);
else if (s[cont] == '\0')
return ('\0');

cont++;
}
return (0);
}
