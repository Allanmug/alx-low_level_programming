#include <stdio.h>
/**
 * main - a program to print numbers from 0 to 9 with spaces
 * Return: 0
 */
int main(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
	putchar(num);
if (num <= '8')
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
