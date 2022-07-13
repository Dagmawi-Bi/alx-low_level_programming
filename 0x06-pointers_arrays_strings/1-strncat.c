#include"main.h"
#include<string.h>
/**
 * _strncat - concatenates two strings
 * @dest: first string parameter
 * @src: second string parameter
 * @n: integer parameter
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
strncat(dest, src, n);
return (dest);
}
