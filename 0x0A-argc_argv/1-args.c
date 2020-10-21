#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that prints its name, followed by a new line.
 *@argc: Values to be passed by argv on the main function
 *@argv: Values to be received by argc to be changed
 *Return: program should print a number, followed by a new line
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", (argc - 1));
return (0);
}
