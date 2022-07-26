#include"main.h"
#include<stddef.h>
#include<stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: arrey size
 * @c:charcter arrey is initalized with
 * Return:pointer to an arrey
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *j;
if (size == 0)
return (NULL);
j = (char *)malloc(size * sizeof(char));
if (j == NULL)
return (NULL);
for (i = 0; i < size; i++)
j[i] = c;
return (j);
}
