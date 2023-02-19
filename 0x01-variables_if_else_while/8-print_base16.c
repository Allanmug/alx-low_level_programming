#include <stdio.h>
/**
 * main - a program to print characters in base 16
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = '0'; ch <= '9'; ch++)
{
	putchar(ch);
if (ch == '9')
{
for (ch = 'a'; ch <= 'f'; ch++)
{
	putchar(ch);
}
}
}
putchar('\n');
return (0);
}
