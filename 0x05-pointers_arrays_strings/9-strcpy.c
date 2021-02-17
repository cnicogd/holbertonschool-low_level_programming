#include "holberton.h"
/**
* _strcpy - pointer from src to dest
*
*@src: src string.
*@dest: dest string.
*
*Return: pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
return (dest);
}
