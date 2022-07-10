#include"main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size:variable parameter
 */
void print_triangle(int size)
{
int i, j, k;
int m = 1;
if (size <= 0)
_putchar ('\n');
else
{
for (i = size; i >= 1; i--)
{
for (j = 1; j <= i - 1; j++)
{
_putchar (' ');
}
for (k = 1; k <= m; k++)
{
_putchar (35);
}
_putchar ('\n');
m++;
}
}
}
