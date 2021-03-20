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
	int unidad /* numeros del 0 -9*/;
	int decena /*numeros del 10- 14*/;

	for (filas = '0'; filas <= '9'; filas++)
	{
		for (columnas = 0; columnas <= 14; columnas++)
		{
			if (columnas < 10)
				unidad = columnas;

			else
			{
				decena = columnas / 10;
				unidad = columnas % 10;
				_putchar('0' + decena);
			}
			_putchar('0' + unidad);
		}
		_putchar('\n');
	}


}
