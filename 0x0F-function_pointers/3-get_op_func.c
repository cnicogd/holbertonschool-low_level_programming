#include "3-calc.h"

/**
 * gt_op_func - find the correct pointer function
 * @s: the srting with the operator symbol
 *
 * Return: the pointer to the correct function
 */  
int (*get_op_func(char *s))(int, int)
{

 op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
i = 0;
	while (ops[i].op != NULL)
	{
		if ((ops[i].op[0] == s[0] && s[1] == '\0')
		return (ops[i].f)
		i++
	}
	return (ops[i].f);/*RETURN NULL*/

}