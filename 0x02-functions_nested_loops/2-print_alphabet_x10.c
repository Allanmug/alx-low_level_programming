#include "main.h"

/**
 * print_alphabet_x10 - printing the alphabet 10x
 *
 * Return: viod
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;
while (i < 10)
{
for (ch = 'a'; ch<='z';ch++)
{
	_putchar(ch);
}
++i;
_putchar('\n');
}
}
