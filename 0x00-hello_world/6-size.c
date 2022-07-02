#include<stdio.h>
/**
 * main - prints size of types
 * Return: value is 0
 */
int main(void)
{
int intType;
float floatType;
long int longtype;
long long longlongtype;
char charType;
printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longtype));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongtype));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
