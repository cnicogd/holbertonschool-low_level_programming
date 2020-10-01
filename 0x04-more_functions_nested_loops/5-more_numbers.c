#include "holberton.h"
/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14, \n
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int filas;
	int columnas;
	int nums /* numeros del 0 -9*/;
	int numz /*numeros del 10- 14*/;

	for (filas = '0'; filas <= '9'; filas++)
	{
		for (columnas = 0; columnas <= 14; columnas++)
		{
			if (columnas < 10)
				nums = columnas;

			else
			{
				numz = columnas / 10;
				nums = columnas % 10;
				_putchar('0' + numz);
			}
			_putchar('0' + nums);
		}
		_putchar('\n');
	}


}
