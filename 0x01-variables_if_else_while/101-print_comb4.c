#include <stdio.h>

int main(void)
{
	int cent, decimal,unit;

	for (cent = 0;cent <= 9; cent++)
	{
		for (decimal = 0; decimal <= 9; decimal++)
		{
			for (unit = 0; unit <= 9; unit++)
			{
				if((!()))
				{
				putchar(cent + 48);
				putchar(decimal + 48);
				putchar(unit + 48);
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return(0);
}