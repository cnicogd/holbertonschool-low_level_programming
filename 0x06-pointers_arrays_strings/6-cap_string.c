#include "holberton.h"
/**
 *cap_string - function that capitalizes all words of a string.
 *@s: variable that iterates the string
 *Return: all words after every sign are going to be uppercase
 */
char *cap_string(char *s)
{
	char *k = "\t\n,;.!?'' (){}";
	int i, x;

	for (i = 0; s[i]; ++i)
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			if (i)
			{
				for (x = 0; k[x] && k[x] != s[i - 1]; ++x)
					;
			}

			if (k[x])
				s[i] -= ('a' - 'A');
		}
	}
	return (s);
}
