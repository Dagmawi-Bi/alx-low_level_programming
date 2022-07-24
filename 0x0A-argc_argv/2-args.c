#include<stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: integer parameter
 * @argv: an arrey of a command listed
 * Return: value 0
 */
int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
