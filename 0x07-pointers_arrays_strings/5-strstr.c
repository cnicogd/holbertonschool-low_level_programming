#include "holberton.h"

/**
 *_strstr - function that locates a character in a string.
 *@haystack: string
 *@needle: first ocurrence of the substring
 *Return: locate the char
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;

	for (; haystack[i]; i++)
	{
		j = 0;
		while (needle[j] && haystack[i] == needle[j])
		{
			i++;
			j++;
		}
	if (j > 0)
	{
	i = i - j;
	if (!needle[j])
	{
	return (haystack + i);
	}
	}
	}
	return ('\0');
}
