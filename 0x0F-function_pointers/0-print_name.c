#include"function_pointers.h"
#include<stddef.h>
/**
 * print_name -  prints a name
 * @name: pointer to name
 * @f: function pointer
 * Return: value is void
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}
