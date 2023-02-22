#include "main.h"

/**
 *print_sign - a progrma to determine whether n is postive of negative
 *@n: the character whos sign is to be determined
 *
 *Return: int or sign
 */
int print_sign(int n)
{
if (n > 0)
{
	_putchar ('+');
	return (1);
}
else if (n == 0)
{
	_putchar('0');
	return (0);
}
else
{
	_putchar('-');
	return (-1);
}
}
