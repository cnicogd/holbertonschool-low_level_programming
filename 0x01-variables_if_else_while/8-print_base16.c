#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char decimaln;
char hex;
for (decimaln = '0'; decimaln <= '9'; decimaln++)
putchar(decimaln);
for (hex = 'a'; hex <= 'f'; hex++)
putchar(hex);
putchar('\n');
return (0);
}
