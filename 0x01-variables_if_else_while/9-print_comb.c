#include <stdio.h>
/**
 * main - Entry point
 * print the anumbers from 0 to 9
 * Return: Always 0 (sucess)
**/
int main(void)
{
	int c;

	c = '0';

	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');
	return (0);
}
