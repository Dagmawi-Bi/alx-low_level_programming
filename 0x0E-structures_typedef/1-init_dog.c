#include<stdlib.h>
#include"dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d:pointer to a structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: value void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
}
