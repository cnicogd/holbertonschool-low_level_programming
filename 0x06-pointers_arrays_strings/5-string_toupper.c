#include "holberton.h"
/**
 *string_toupper - function that changes
 *all lowercase letters of a string to uppercase
 *@s: string to be converted
 *Return: all lowercase letters to uppercase
*/
char *string_toupper(char *s)
{
	int c;

	while (s[c] != '\0')
{
		if (s[c] >= 'a' && s[c] <= 'z')
			s[c] = s[c] - 32;
				c++;
	}
	return (s);
}
