#include"3-calc.h"
/**
 * get_op_func - select for the correct functiion
 * @s: oprator used
 * Return: NULL or the function based on function
 */
int (*get_op_func(char *s))(int int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL},
};
int i = 0;
while (i < 5)
{
if (s[0] == ops[i].op[0])
{
return (ops[i].f);
}
i++
}
return (NULL);
}
