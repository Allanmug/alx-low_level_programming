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
	putchar(',');
	putchar(' ');
if(num == '8')
{
	++num;
	putchar(num);
}
}
putchar('\n');
return (0);
}
