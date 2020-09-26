#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char lowerCase;
char upperCase;
for (lowerCase = 97; lowerCase <= 122; lowerCase++)
putchar(lowerCase);
for (upperCase = 65; upperCase <= 90; upperCase++)
putchar(upperCase);
putchar('\n');
return (0);
}
