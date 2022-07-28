#include"main.h"
#include<stdlib.h>
/**
 * malloc_checked - allocate a memory usinng malloc
 * @b: integer parameter to be assigned
 * Return:allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
