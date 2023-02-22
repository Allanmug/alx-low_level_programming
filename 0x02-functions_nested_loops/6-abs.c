#include "main.h"

/**
 *_abs - a progrma to print the absolute of a number
 *@n : the input character
 *Return: int or sign
 */
int _abs(int n)
{
if (n > 0)
{
	_putchar (n);
}
else
{
	n = n * (-1);
	_putchar(n);
}
}
