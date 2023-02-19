#include <stdio.h>
/**
 * main - a program to print alphabet in lowercase back wards
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
