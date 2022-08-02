#ifndef STRTYP
#define STRTYP
/**
 * struct dog - structure of a dog
 * @owner: owner of the dog
 * @age: age of the dog
 * @name: name of the dog
 */
struct dog
{
char *name;
char *owner;
float age;
};
typedef struct dog dog_t;
void int_dog(struct dog *d, char *name, char *owner, float age);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, char *owner, float age);
void free_dog(dog_t *d);
#endif
