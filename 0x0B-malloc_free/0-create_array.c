#include <stdlib.h>
#include "holberton.h"
/**
 *
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i;

if(size == 0)
return ('\0');
ptr = malloc(sizeof(char) * size);
if (ptr)
{
for (i = 0; i < size; i++)
ptr[i] = c;
}
return (ptr);
}
