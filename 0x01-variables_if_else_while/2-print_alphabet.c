#include <stdio.h>
/**
 * main - a program to print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
char ch;
for(ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'z')
{
	putchar(ch);
	putchar("\n");
}
else
{
	putchar(ch);
}
}
return (0);
}
