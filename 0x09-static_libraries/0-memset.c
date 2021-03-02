#include "holberton.h"
/**
 *_memset -function that fills memory with a constant byte.
 *@s: the string
 *@b: the addresses of the memory
 *@n: times to be iterated
 *Return: string n times
 */
char *_memset(char *s, char b, unsigned int n)
{
int i = 0;

	while (n--)
	{
		s[i] = b;
		i++;
}
	return (s);
}
