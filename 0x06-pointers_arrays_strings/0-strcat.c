#include "holberton.h"
/**
 * _strcat -function that concatenates two strings.
 *@dest: init
 *@src: finish
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
