#include <stdio.h>
/**
 * main - add number after de division + 48 
 * to be understanded by putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int number;
for (number = 0; number < 100 ; number++)
{
putchar((number / 10) + 48);
putchar((number % 10) + 48);
if (number != 99)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
