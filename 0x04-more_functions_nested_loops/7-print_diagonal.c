#include"main.h"
/**
 * print_diagonal- draws a diagonal line on the terminal
 * @n: integer parameter
 */
void print_diagonal(int n)
{
int r;
int c;
if (n <= 0)
{
_putchar ('\n');
}
else
{
for (r = 1; r <= n; r++)
{
for (c = 1; c <= n; c++)
{
if (c == r)
_putchar (92);
else
_putchar (' ');
}
_putchar ('\n');
}
}
}
