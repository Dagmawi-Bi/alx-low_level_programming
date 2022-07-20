#include"main.h"
int _sqrt(int, int);
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer parameteer
 * Return: square root of the number
 */
int _sqrt_recursion(int n)
{
return (_sqrt(n, 1));
}
/**
 *_sqrt - recursion square root
 *@n: integer
 *@i: an iterator
 *Return: an integer
 */
int _sqrt(int n, int i)
{
int square = i * i;
if (square > n)
return (-1);
if (square == n)
return (i);
return (_sqrt(n, i + 1));
}
