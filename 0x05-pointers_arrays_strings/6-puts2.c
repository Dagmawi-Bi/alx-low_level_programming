#include"main.h"
#include<string.h>
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: string parameter
 */
void puts2(char *str)
{
int i, j;
i = strlen(str);
for (j = 0; j < i; i += 2)
_putchar (str[j]);
_putchar ('\n');
}
