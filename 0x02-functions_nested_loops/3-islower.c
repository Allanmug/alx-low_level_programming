#include "main.h"

/**
 *_islower - a program to show if the char c is lower
 *@c: the character for lower
 *Description: 'c stands for any int passed in'
 *Return: 0 or 1
 */
int _islower(int c)
/*c :character c*/
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
