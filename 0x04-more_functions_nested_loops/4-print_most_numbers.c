#include "main.h"
/**
 * print_most_numbers - a program to print numbers from 0 to 9
 * Return: 0
 */
void print_most_numbers(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
	if (num == '2' || num == '4')
	{
		continue;
	}
	else
	{
		_putchar(num);
	}
}
_putchar('\n');
}
