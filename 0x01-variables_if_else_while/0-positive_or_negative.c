#include <stdlib.h>
#include <time.h>
/**
 * main - a progra to determine whether a number is postive or negative
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n==0)
        {
	printf("is zero");
	}
	if else (n<0)
        {
        printf("is negative");
	}
	else (n>0)
        {
        printf("is positive");
        }
	return (0);
}
