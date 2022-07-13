#include"main.h"
/**
 * leet - encodes a string into 1337
 * @j: string parameter
 * Return: string
 */
char *leet(char *j)
{
int a = 0, b, l = 5;
char tr[5] = {'A', 'E', 'O', 'T', 'L'};
char trw[5] = {'4', '3', '0', '7', '1'};
while (j[a])
{
b = 0;
while (b < l)
{
if (j[a] == tr[b] || j[a] - 32 == tr[b])
j[a] = trw[b];
b++;
}
a++;
}
return (j);
}
