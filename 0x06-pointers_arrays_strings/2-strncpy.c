#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0; dest[n] != '\0'; ++n)	 
	{
		src[n] = dest[n];
	}
	src[n] = '\0';

	return (dest);
}
