#include "main.h"

/**
 *_islower(int c) - a program to show if the char c is lower
 *Description: 'c is a parameter to be compared'
 *Return: 0 or 1
 */
int _islower(int c)
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
