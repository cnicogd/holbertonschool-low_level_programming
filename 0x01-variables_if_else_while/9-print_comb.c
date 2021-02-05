#include <stdio.h>
/**
 * main - Entry point
 * print the anumbers from 0 to 9
 * Return: Always 0 (sucess)
**/
int main(void)
{
	int c;

	c = 48;

	while (c <= 57)
	{
		putchar(c + 48);
		if (c != 57)
		putchar(',');
		putchar(' ');
		c++;
	}
	putchar('\n');
	return (0);
}
