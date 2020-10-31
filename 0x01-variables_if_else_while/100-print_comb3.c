#include <stdio.h>
/**
 *main -program that prints all possible different combinations of two digits.
 *Return: numbers to be printed.
 */
int main(void)
{
int counter, unit, decimal;

unit = 0;
decimal = 0;
counter = 0;

		while (counter < 100)
		{
		unit = counter % 10;
		decimal = counter / 10;
			if (unit != decimal)
			{
				if (decimal < unit)
				{
					putchar((counter / 10) + 48);
					putchar((counter % 10) + 48);
					if (counter != 89)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		counter++;
		}
		putchar('\n');
		return (0);
}
