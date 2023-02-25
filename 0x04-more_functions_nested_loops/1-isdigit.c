#include "main.h"

/**
 *_isdigit - a program to show if the charactor c is a number
 *@c: the number to be checked
 *Description: 'c stands for any int passed in'
 *Return: 0 or 1
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
	return (1);
}
else
{
	return (0);
}
}
