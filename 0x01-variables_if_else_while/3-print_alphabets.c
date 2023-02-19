#include <stdio.h>
#include <ctype.h>
/**
 * main - a program to print alphabet in lowercase and uppercase
 * Return: 0
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
if(ch == 'z')
{
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(toupper(ch));
}
}
}
putchar('\n');
return (0);
}
