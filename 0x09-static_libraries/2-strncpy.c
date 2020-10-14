#include "holberton.h"
/**
 * _strncpy - function that copies a string.
 *@dest: ehre i want to copy
 *@src: from who i want to copy
 *@n: total of bytes to be printed
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
