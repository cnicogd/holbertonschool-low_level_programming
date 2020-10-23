#include "3-calc.h"
/**
* main - this is a basic calculator
* @argc: int number it the quantity of arguments
* @argv: string array with the arguments
*
*Return: if the number of arguments is wrong, 98
*if the operator is wrong, 99
*if the user tries to divide(/ or %) by 0, 100
*/

int main(int argc, char **argv)
{
int (*func)(int, int);
int num1, num2;
char *oper;
char check[3] = "/%";
int result;

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
oper = argv[2];


if ((oper[0] == check[0] || oper[0] == check[1]) && num2 == 0)
{
printf("Error\n");
exit(100);
}
func = get_op_func(oper);
/* if wrong operator */
if (func == NULL)
{
	printf("Error\n");
	exit(99);
}
result = func(num1, num2);
printf("%d\n", result);

return (EXIT_SUCCESS);
}
