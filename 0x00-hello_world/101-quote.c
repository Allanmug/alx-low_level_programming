#include <stdio.h>
#include <unistd.h>
/**
 * main- a program that prits the reqired statements
 * Return: 1
 */
int main(void)
{
char phrase[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
write(1, phrase, sizeof(phrase));
return (1);
}
