#include "function_pointers.h"
/**
*int_index - function that searches for an integer.
*@cmp: pointer to the function
*@size: size of the array
*@array: array of numbers
*Return: teh first element which cmp compares
*/
int int_index(int *array, int size, int (*cmp)(int))
{

		 int i;
		 int j;

if (size <= 0)
return (-1);
if (array && size && cmp)
{
for (i = 0; i < size; i++)
{
j = cmp(array[i]);
if (j != 0)
return (i);
}
}
return (-1);
}
