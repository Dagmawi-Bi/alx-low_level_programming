#include<stdio.h>
/**
 * main -  prints the number of arguments passed into it
 * @argc: integer parameter
 * @argv: an arrey of a command listed
 * Return: value 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
