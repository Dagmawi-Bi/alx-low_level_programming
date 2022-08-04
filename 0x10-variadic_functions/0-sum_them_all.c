#include"variadic_functions.h"
#include<stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 * @n: constant unsigned integer parameter
 * Return: value of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
return (0);
va_list ap;
va_start(ap, n);
int i = 0, sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(ap, const unsigned int);
va_end(ap);
return (sum);
}
