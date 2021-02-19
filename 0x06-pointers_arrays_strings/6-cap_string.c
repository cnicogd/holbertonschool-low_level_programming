#include "holberton.h"
/**
 *cap_string - function that capitalizes all words
 *@s: varianle that iterates the string
 *Return: all words after every sign to upper
 */
char *cap_string(char *s)
{
	char *signs = "\t\n,;.!?'' (){}";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			if (i)
			{
				for (j = 0; signs[j] && signs[j] != s[i - 1]; j++)
				{}
			}
			if (signs[j])
			{
				s[i] -= ('a' - 'A');
			}
		}
	}
	return (s);
}
