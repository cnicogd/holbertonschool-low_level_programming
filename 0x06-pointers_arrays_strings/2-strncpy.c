#include "holberton.h"
/**
 * _strncpy - function that copies a string.
 * @dest: where i want to copy the str
 * @src: from where i want to copy.
 * @n: total of bytes of the str
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
