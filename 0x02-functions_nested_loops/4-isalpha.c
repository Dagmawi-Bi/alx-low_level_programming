#include"main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character argument
 * Return: value is always 0 and 1 based on condition
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
