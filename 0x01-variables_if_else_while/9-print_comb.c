#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int decimal;

for (decimal = '0'; decimal <= '9'; decimal++)
{
putchar(decimal);
if (decimal < '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
