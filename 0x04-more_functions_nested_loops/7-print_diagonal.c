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
for (r = 0; r < n; r++)
{
for (c = 0; c < n; c++)
{
_putchar (' ');
}
_putchar (92);
_putchar ('\n');
}
}
}
