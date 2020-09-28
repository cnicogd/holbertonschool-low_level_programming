#include "holberton.h"
/**
 *print_alphabet_x10  - this functions prints the alphabet on a loop 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int alphab;
char c;

for (alphab = 0; alphab < 10; alphab++)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
