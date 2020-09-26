#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c, d;
for (c = 97; c <= 122; c++){
for (d = 65; c <= 90; d++)
putchar(d);
}
putchar(c);
putchar('\n');
return (0);
}
