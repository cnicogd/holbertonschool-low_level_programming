#include <stdio.h>
/**
 * main - Entry point
 * print the alphabet in lowercase then in uppercase
 * Return: Always 0 (sucess)
**/
int main(void)
{
	char c, d;

	c = 97;
	d = 65;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	while (d <= 90)
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
