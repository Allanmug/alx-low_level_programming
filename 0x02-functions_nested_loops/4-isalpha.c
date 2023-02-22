#include "main.h"

/**
 *_islower - a program to show if the char c is an alphabet
 *@c: the character for lower
 *Description: 'c stands for any int passed in'
 *Return: 0 or 1
 */
int _isalpha(int c);
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
