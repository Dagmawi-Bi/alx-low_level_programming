#include<stdio.h>
#include<stdlib.h>
/**
 *main - multiplies two numbers
 *@argc: integer parameter
 *@argv: char parameter
 *Return:value 1 or 0 dependening on conditions
 */
int main(int argc, char argv[])
{
int result, num1, num2;
if (argc != 3)
{
printf("%s\n", "Error");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
