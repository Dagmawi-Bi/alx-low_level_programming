#include"main.h"
/**
 * print_sign - prints the sign of a number
 * @n: variable argument
 * Return: value is 1,0,-1 basedon acondition
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
if (n == 0)
{
_putchar ('0');
return (0);
}
if (n < 0)
{
_putchar ('-');
return (-1);
}
}

