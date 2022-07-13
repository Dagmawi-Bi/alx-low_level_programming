#include"main.h"
/**
 * cap_string - capitalizes all words of a string
 * @j: string parameter
 * Return: cap for the given
 */
char *cap_string(char *j)
{
char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
int l = 13;
int a = 0, i;
while (j[a])
{
i = 0;
while (i < l)
{
if ((a == 0 || j[a - 1] == spc[i]) && (j[a] >= 97 && j[a] <= 122))
j[a] = j[a] - 32;
i++;
}
a++;
}
return (j);
}
