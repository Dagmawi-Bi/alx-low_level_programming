#include"main.h"
/**
 *jack_bauer - prints every minute of the day of Jack Bauer,
 *starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
int q, w;
for (q = 0; q < 24; q++)
{
for (w = 0; w <= 60; w++)
{
if (q < 10)
{
_putchar (0);
_putchar (q + '0');
}
else if (q >= 10)
{
_putchar ((q / 10) + '0');
_putchar ((q % 10) + '0');
}
if (w < 10)
{
_putchar (':');
_putchar (0);
_putchar (w + 0);
}
else if (w >= 10)
{
_putchar (':');
_putchar ((w / 10) + '0');
_putchar ((w % 10) + '0');
}
_putchar ('\n');
}
}
}
