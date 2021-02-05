#include <stdio.h>
/**
 * main - Entry point
 * print the alphabet except q and e
 * Return: Always 0 (sucess)
**/
int main(void)
{
	char c;

	c = 97;

	while (c <= 122)
	{
		if (c != 'e' || c != 'q')
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);

}
