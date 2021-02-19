#include "holberton.h"
/**
 * string_toupper - function that changes lower to upper
 *@s: string to be converted
 *Return: all lowercase letters to uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] -32;
		}
		i++;
	}
	return (s);
}