#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function that prints a name.
 *@name: name of the function to be passed trought f
 *@f: values of the parameters
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
