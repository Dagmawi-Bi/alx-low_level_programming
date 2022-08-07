#include<stdlib.h>
#include<stdio.h>
#include<stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: a pointer
 * @n: unsigned integer parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list num;
va_start(num, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(num, int));
if (i < n - 1 && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(num);
}
