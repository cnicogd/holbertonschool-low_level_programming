#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that prints its name, followed by a new line.
 *@argc: Values to be passed by argv on the main function
 *@argv: Values to be received by argc to be changed
 *Return: a program who multipies 2 numbers
 */

int main(int argc, char *argv[])
{
int n1, n2, mul;


if (argc != 3)
{
printf("Error\n");
return (1);
}
else if (argc == 3)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
mul = n1 *n2;
printf("%d\n", mul);
}
return (0);
}
