#include "holberton.h"
/**
*_strcat - function that concatenates two strings.
*
*@dest: str dest
*@src: str src
*Return: result.
*/

char *_strcat(char *dest, char *src)
{
	char *res = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (res);
}
