#include"main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @i: string parameter
 * Return: string
 */
char *string_toupper(char *i)
{
int j;
while (i[j])
{
if (i[j] >= 97 && i[j] <= 127)
i[j] = i[j] - 32;
j++;
}
return (i);
}
