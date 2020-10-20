#include "holberton.h"
#include <stdio.h>

/** main - Program that prints its name, followed by a new line.
 *argc: Values to be passed by argv on the main function
 *argv: Values to be received by argc to be changed
 *Return: new Name
 */ 

int main( argc, char *argv[])
{
    (void)argv;
    printf ("%s\n", (argc - 1));
return (0);
}