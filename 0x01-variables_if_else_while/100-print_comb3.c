#include <stdio.h>

int main(void)
{
	int unit, decimal;

	for (decimal = 0; decimal <= 9; decimal++)
	{
		for (unit = 0; unit <= 9; unit++)
		{
			if (!(decimal > unit) && (!(decimal == unit)))
			{
				putchar(decimal + 48);
				putchar(unit + 48);
				if (!(decimal == 8 && unit == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
