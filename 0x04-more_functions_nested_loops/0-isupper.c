#include "main.h"

/**
 *_isupper - a program to show if the char c i uppercase
 *@c: the character to be checked
 *Description: 'c stands for any int passed in'
 *Return: 0 or 1
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
	return (1);
}
else
{
	return (0);
}
}
