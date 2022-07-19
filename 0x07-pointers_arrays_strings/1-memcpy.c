#include"main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: sorce memory
 * @n: the byte to be copied
 * Return: the string copied from sorce
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
dest[a] = src[a];
return (dest);
}
