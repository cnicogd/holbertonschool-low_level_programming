#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/** main - Program that prints its name, followed by a new line.
 *argc: Values to be passed by argv on the main function
 *argv: Values to be received by argc to be changed
 *Return: new Name
 */ 

int main( argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
    printf ("%s\n", arg[i]);
}
return (0);
}