#include "holberton.h"

/**
 *rot13 - function that encodes a ROT13.
 *
 * @s: String
 * Return: String
 */

char *rot13(char *s)
{
char arrN[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
char array[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
int i, j;

for (i = 0; s[i] != '\0'; ++i)
{
for (j = 0; array[j] != '\0'; ++j)
{
if (s[i] == array[j])
{
s[i] = arrN[j];
}
}
}
return (s);
}
