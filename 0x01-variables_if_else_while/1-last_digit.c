#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print the last digit of a random number n is
 * less than five, greater than five or is even zero
 *
 * Return: 0 on success
 */
int main(void)
{
	int n;
	char last[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 11);
	if (n % 11 > 5)
	{
		printf("greater than 5\n");
	}
	else if (n % 11 == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
