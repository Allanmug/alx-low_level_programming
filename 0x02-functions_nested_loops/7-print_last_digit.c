#include "main.h"

/**
 *print_last_digit - a progrma to print the last digit of a number
 *@n : the input character
 *Return: n
 */
int print_last_digit(int n)
{
	int num;

	num = n %  10;

if (num < 0)
{
	num = num * -1;
}
	_putchar(num + '0');
	return (num);
}

