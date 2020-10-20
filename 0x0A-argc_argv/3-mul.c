#include "holberton.h"
#include <stdio.h>

/** main - Program that prints its name, followed by a new line.
 *argc: Values to be passed by argv on the main function
 *argv: Values to be received by argc to be changed
 *Return: new Name
 */ 

int main( argc, char *argv[])
{
int n1 = 0, n2 = 0, mul = 0;


if (argc != 3)
{
printf("Error\n");
return (1);
}
else if ( argc == 3)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
mul = n1 * n2;
printf("%dmul", mul);
}
return (0);
}