#include "holberton.h"
/**
 *jack_bauer  - this gives you something like a timer.
 *
 * Return: timer.
 */
void jack_bauer(void)
{
	int horas, min;
horas = 0;

	while(horas < 24)
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
			min++;
		}
		horas++;
	}
}
