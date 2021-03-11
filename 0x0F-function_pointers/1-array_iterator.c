#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that prints the action array
 * @array: array of adresses
 * @size: size of the array
 * @action: action fnc to array
 *
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
