#include"main.h"
/**
*print_line- draws a straight line in the terminal.
*@n: integer parameter
*/
void print_line(int n)
{
int i;
if (n <= 0)
{
_puchar ('\n');
}
else
{
for (i >= 0; i < n; i++)
{
_putchar (95);
}
_putchar ('\n');
}
}
