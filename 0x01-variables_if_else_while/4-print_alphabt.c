#include <stdio.h>
/**
 * main - a program to print alphabet in lowercase not including e and q
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e' || ch == 'q')
{
	continue;
}
else
{
       	putchar(ch);
}
}
putchar('\n');
return (0);
}
