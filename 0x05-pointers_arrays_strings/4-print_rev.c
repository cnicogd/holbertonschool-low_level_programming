#include "holberton.h"
void print_rev(char *s)
{
	int i, j, temp;

for (i = 0; s[i] != '\0'; i++)
{
	temp = i;
}
for(j = temp - 1; s[j] !=  0; j--)
{
	_putchar(s[j]);
}
_putchar('\n');
}