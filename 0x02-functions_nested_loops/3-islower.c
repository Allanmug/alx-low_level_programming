#include "main.h"

/**
 *_islower - a program to show if the char c is lower
 * c - parameter to be compared
 *Return: 0 or 1
 */
int _islower(int c)
{
	int c;

if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}
