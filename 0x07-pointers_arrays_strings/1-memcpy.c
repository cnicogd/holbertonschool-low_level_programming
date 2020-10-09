#include "holberton.h"
/**
 *_memcpy - copy the adress os src on dest
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	
	while (i < n)
	{
		src[i] = dest[i];
		i++;
}
	return (dest);

}
