#include "holberton.h"
/**
 *  _strcpy - copy an array on a diferent dest
 *@dest: to src
 *@src: from dest
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	*(dest + 1) = '\0';
			return (dest);
}
