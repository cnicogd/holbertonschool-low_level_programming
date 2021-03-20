#include "holberton.h"

/**
 *_strspn - function that locates a character in a string.
 *@s: string
 *@accept: check the segment to be compared
 *Return: returns the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;

for (i = 0 ; s[i] != '\0' ; s++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
			if (s[i] == accept[j])
				{
					return (*s);
				}
			else if (s[i] == '\0')
				{
					return ('\0');
				}
		}
		return(0);
}
