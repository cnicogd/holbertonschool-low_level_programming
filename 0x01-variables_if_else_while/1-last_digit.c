#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * Last digit of a number
 * Return: Always 0 (sucess)
**/
int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, d);
	else if (d != 0 && d < 6)
	printf("Last digit of %d is %d and is less than 0\n", n, d);
	else
	printf("Last digit of %d is %d ad is 0\n", n, d);



	return (0);
}
