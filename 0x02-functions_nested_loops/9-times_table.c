#include "main.h"

/**
 * times_table - A program to print the multiplication table
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, op;

for (a = 0; a <= 9; a++)
{
	_putchar(48);
for (b = 1; b <= 9; b++)
{
	prod = a * b;
	_putchar(44);
	_putchar(32);
if (prod <= 9)
{
	_putchar(32);
	_putchar(prod + 48);
}
else
{
	_putchar((prod / 10) + 48);
	_putchar((prod % 10) + 48);
}
}
_putchar('\n');
}
}
