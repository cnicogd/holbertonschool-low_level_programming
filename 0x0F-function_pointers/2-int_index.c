#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * int_index - check if match
 * @array: array .
 * @size: size of array.
 * @cmp: pointer to the first comparison
 * Return: 0 if  is false.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array || cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i] != 0))
{
return (i);
}
}
}
return (-1);
}
