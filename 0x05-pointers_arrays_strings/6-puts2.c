#include "holberton.h"
/**
 * puts2 - Function that prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	{
		int init = 0, leng = 0;

		while (str[init++])
			leng++;

		for (init = 0; init < leng; init += 2)
		{
			_putchar(str[init]);
		}
		_putchar('\n');
	}
}
