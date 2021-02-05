#include <stdio.h>
/**
 * main - Entry point
 * print the alphabet in lowercase
 * Return: Always 0 (sucess)
**/
int main(void)
{
	char c;

	c = 122;

	while (c >= 97)
	{
		putchar(c);
		c++;
	}
	putchar ('\n');
	return (0);
}
