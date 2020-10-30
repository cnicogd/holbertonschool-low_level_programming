#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int lowerCase = 97;

while (lowerCase <= 122)
{
if  (lowerCase != 113 && lowerCase != 101)
{
putchar(lowerCase);
}
lowerCase++;
}
putchar('\n');
return (0);
}
