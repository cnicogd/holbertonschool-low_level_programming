#include "holberton.h"

/**
 * _strpbrk - function  for any of a set of bytes.
 * @s: The string
 * @accept: bytes
 *
 * Return: ponter to s else null
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return ('\0');
}
