#include "holberton.h"
/**
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i ;
	
while (i < n)
	{
		src[n] = dest[n];
		i++;
}
	return (dest);

}
