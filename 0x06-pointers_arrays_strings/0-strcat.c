#include"main.h"
#include<string.h>
/**
 * _strcat- concatenates two strings.
 * @dest: first parameter
 * @src: second parameter
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
int l = 0, i;
while (dest[l])
l++;
for (i = 0; src[i] != 0; i++)
{
dest[l] = src[i];
l += 1;
}
dest[l] = '\0';
return (dest);
}
