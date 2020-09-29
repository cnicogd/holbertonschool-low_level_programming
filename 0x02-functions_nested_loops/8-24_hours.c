#include "holberton.h"
/**
 *  - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int horas, min;
	for (horas = 0; horas < 24; horas++)
	{
		min = 0;
		while (min <= 59)
		{
			_putchar(horas / 10 + 48);
			_putchar(horas % 10 + 48);
			_putchar(':');
			_putchar(min / 10 + 48);
			_putchar(min % 10 + 48);
			_putchar('\n');

			min ++;
}
} 
}
