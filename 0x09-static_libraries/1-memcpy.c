#include "holberton.h"
/**
 *_memcpy - copy the adress os src on dest
 *@dest: variable taken from src
 *@src: value to be send it
 *@n: bytes to be passed
*Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
}
	return (dest);

}
