#include "main.h"

/**
 *more_numbers - print numbers from 1 to 14 10 x
 *
 * Return: viod
 */
void more_numbers(void)
{
	char ch;
	int i;

	i = 0;

while (i < 10)
{
for (ch = '0'; ch <= '14'; ch++)
{
	_putchar(ch);
}
++i;
_putchar('\n');
}
}
