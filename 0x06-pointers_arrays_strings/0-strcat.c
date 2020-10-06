#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;
	

	for (; *dest != '\0'; ++dest)
	{
		;
	}
	for (; *src != '\0'; ++src)
	{
	*dest = *src;
	dest++;
	}
	*dest = '\0';
	return (result);

}
