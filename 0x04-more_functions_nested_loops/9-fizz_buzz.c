#include <stdio.h>
#include "holberton.h"
/**
* main- thos functionn print a%3 fizz , a%5 buzz && 3%5 fizzbuzz.
* Return: Always 0.
*/
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf("Fizz");
		if (a % 5 == 0)
			printf("Buzz");
		if (a % 3 && a % 5)
			printf("FizzBuzz");
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
