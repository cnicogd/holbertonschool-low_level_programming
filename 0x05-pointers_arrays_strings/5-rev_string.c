#include "holberton.h"
/**
* rev_string - Write a function that reverses a string.
*
*@s: string to be swapped.
*/
void rev_string(char *s)
{
	int i, length = 0;
	char temp;

	i = 0;

	while (s[i++])
	length++;
	for (i = length - 1; i >= length / 2; i--)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
