#include "main.h"

/**
 *_islower - a program to show if the char is lower
 *Return: 0 or 1
 */
int _islower(int c)
{
	int one;
	int zro;
	one='1';
	zro = '0';

if (c >= 'a' && c <= 'z')
{
	_putchar(one);
}
else
{
	_putchar(zro);
}
}
