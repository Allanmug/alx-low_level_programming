#include <stdio.h>
#include <string.h>
/**
 * main - Aprogram to print the word _putchar
 * Return: 0
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;
for (i=0; i<strlen(ch); i++)
{
	putchar(ch[i]);
}
putchar('\n');
return (0);
}
