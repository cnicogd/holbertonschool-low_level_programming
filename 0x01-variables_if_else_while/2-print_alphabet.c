#include <stdio.h>
/**
 * main - Entry point
 * print the alphabet in lowercase
 * Return: Always 0 (sucess)
**/
int main (void)
{
	char c;
	c = 97;

	while(c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar ('\n');
	return (0);
}