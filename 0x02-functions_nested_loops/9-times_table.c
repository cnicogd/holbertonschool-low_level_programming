#include "holberton.h"
/**
 * times_table - prints the 9 times table
 * Return: no return
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 0; mult <= 9; mult++)
		{
			if (mult > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			prod = num * mult;
			if (prod > 9)
			{
				_putchar((prod / 10) + '0');
			}
			else
			{
				if ((prod / 10 == 0 && prod % 10 == 0) && mult == 0)
				{
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
