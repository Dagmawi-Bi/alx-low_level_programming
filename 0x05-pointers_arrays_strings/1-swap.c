#include"main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: parameter assigned
 * @b: parameter assigned
 */
void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = *i;
}
