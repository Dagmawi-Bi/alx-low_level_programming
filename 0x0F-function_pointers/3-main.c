#include"3-calc.h"
/**
 * main - check argument
 * @argv: argument vector
 * @argc: argument count
 * Return: value error if wrong argument
 */
int main(int argc, char *argv[])
{
int a = 0, b = 0, res = 0;
char s;
if (argc != 4)
{
printf("Error \n");
exit(98);
}
/* check if there is only 1 oprator*/
if (argv[2][1] != '\0')
{
printf("Error \n");
exit(99);
}
s = argv[2][0];
if (s != '+' && s != '/' && s != '*' && s != '-' && s != '%')
{
printf("Error \n");
exit(99);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
res = (get_op_func(argv[2]))(a, b);
printf("%d \n", res);
return (0);
}
