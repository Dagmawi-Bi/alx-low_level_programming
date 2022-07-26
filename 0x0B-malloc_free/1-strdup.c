#include"main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * @str: string to be duplicated
 * Return:a string pointer
 */
char *_strdup(char *str)
{
int p = 1, q = 0;
char *s;
if (str == NULL)
return (NULL);
while (str[p])
p++;
s = (char *)malloc(p *sizeof(char) + 1);
if (s == NULL)
return (NULL);
while (q < p)
{
s[q] = str[q];
q++;
}
s[q] = '\0';
return (s);
}
