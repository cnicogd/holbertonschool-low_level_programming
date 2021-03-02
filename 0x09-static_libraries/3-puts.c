#include "holberton.h"

/**
 * _puts - function that prints a string, followed by a new line.
 *@str: loops a string
 * Return: Always 0.
 */
void _puts(char *s)
{
  int i;

  for (i = 0; s[i] != 0; i++)
  {
    _putchar(s[i]);
  }

  _putchar('\n');
}
