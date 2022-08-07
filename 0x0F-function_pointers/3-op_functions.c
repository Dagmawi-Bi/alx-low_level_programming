#include"3-calc.h"
/**
 * op_add - return the sum of 2 numbers
 * @a: integer parameter
 * @b: integer parameter
 * Return: value of sum
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - return differance of 2 numbers
 * @a: integer parameter
 * @b: integer parameter
 * Return: value of defferance
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - return the product of 2 numbers
 * @a: integer parameter
 * @b: integer parameter
 * Return: vale of product
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - division oprator
 * @a: integer parameter
 * @b: integer parameter
 * Return: value of the division
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error \n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - division reminder oprater
 * @a: integer parameter
 * @b: integer parameter
 * Return: value of modulo
 */
int op_mod(int a, int b)
{
if (b == 0)
printf("Error \n");
exit(100);
}
return (a % b);
}
