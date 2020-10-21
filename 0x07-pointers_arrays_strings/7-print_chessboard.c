#include "holberton.h"

/**
 * print_chessboard - function that locates a character in a string.
 *@a: parameter who bring to us the parameters to be checked
 *Return: the complete chessboard
 */
void print_chessboard(char (*a)[8])
{
int rows, columns;
for (rows = 0; rows < 8; rows++)
{
for (columns = 0; columns < 8; columns++)
_putchar(a[rows][columns]);
_putchar('\n');
}
}
