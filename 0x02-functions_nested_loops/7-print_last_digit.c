#include "main.h"

/**
 *print_last_digit - a progrma to print the last digit of a number
 *@n : the input character
 *Return: n
 */
int print_last_digit(int n)
{
if (n >= 0)
{
	n = n % '10';
	_putchar(n + '0');
	return (n)
}
}
