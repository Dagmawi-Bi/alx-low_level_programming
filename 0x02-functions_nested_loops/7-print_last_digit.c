#include"main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @z: parameter
 * Return: value is z
 */
int print_last_digit(int z)
{
z = -z;
z = z % 10;
return (z);
}
