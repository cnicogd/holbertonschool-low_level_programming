#include <stdio.h>
/**
* main- thos function print a%3 fizz , a%5 buzz && 3%5 fizzbuzz.
* Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		printf("FizzBuzz");

		else if (i % 3 == 0)
		printf("Fizz");

		else if (i % 5 == 0)
		printf("Buzz");

		else
		printf("%d", i);

		if (i < 100)
		putchar (' ');
	}
	putchar('\n');
	return (0);
}
