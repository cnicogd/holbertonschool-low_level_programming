#include <stdio.h>

int main(void)
{
	int i , j;

	for (i = 0; i <= 9; i++)
	{
		for(j = 0; j <= 9; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			if(!(i == 9 && j == 9))
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}