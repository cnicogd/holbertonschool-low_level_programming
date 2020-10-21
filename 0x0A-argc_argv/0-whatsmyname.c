#include <stdlib.h>
#include <stdio.h>


/**
 * main -argc argv
 *@argc: Values to be passed by argv on the main function
 *@argv: Values to be received by argc to be changed
 *Return: new Name
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
