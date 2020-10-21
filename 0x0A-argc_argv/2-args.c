#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that prints its name, followed by a new line.
 *@argc: Values to be passed by argv on the main function
 *@argv: Values to be received by argc to be changed
 *Return: all arguments who it receives
 */

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
