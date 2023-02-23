#include "main.h"

/**
 *print_last_digit - a progrma to print the last digit of a number
 *@n : the input character
 *Return: n
 */
int print_last_digit(int n)
{
	int num;
if (n >= 0)
{
	num = n % 10;
	_putchar(num + '0');
	return (num);
}
else if
{
	n = n * (-1);
	num = n % 10;
	_putchar(num + '0');
	return (num);
}
