#include"main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
int p = 0, q = 0, r = 0, t = 0;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[p])
p++;
while (s2[q])
q++;
r = p + q;
s = (char *)malloc(r *sizeof(char) + 1);
q = 0;
while (t < r)
{
if (t <= p)
s[t] = s1[t];
if (t > p)
{
s[t] = s2[q];
q++;
}
t++;
}
s[t] = '\0';
return (s);
}
