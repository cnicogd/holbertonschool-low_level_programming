#include <stdio.h>
/**
 *main -program that prints all possible different combinations of two digits.
 *Return: numbers to be printed.
 */
int main(void)
{
int i;

for (i = 0; i < 100; i++)
{
if (!(i >= 10 && i <= 11 && i >= 20 && i <= 22))
{
if (!(i >= 30 && i <= 33 && i >= 40 && i <= 44))
{
if (!(i >= 50 && i <= 55 && i >= 60 && i <= 66))
{
if (!(i >= 70 && i <= 77))
{
if (!(i >= 80 && i <= 88))
{
if (!(i >= 90 && i <= 99))
{
putchar(i / 10 + 48);
putchar(i % 10 + 48);
if (i != 89)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
}
}
putchar('\n');
}
