#include"main.h"
int c_p(int, int);
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * ealse 0
 * @n: integer parameter
 * Return: 1 and 0 based on condition
 */
int is_prime_number(int n)
{
return (c_p(n, 1));
}
/**
 *c_k - check prime number
 *@n: integer parameter
 *@i: iterater
 *Return: 0 or 1
 */
int c_p(int n, int i)
{
if (n <= 1)
return (0);
if (n % i == 0 && i > 1)
return (0);
if ((n / i) < i)
return (1);
return (c_p(n, i + 1));
}
